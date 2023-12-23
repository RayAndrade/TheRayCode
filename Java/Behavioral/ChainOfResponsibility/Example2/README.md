[up](../README.md)

This code is an implementation of the Chain of Responsibility design pattern, which is a behavioral design pattern. 
This pattern is used to pass a request along a chain of handlers. 
Upon receiving a request, each handler decides either to process the request or to pass it to the next handler in the chain. In this case, the chain is used for processing authentication and authorization requests. 
Let's break down each class and method:

### `Middleware.java`
This is an abstract class that acts as the base for different types of middleware in the authentication process. Each middleware can link with the next one, forming a chain.

- `private Middleware next`: This field holds a reference to the next middleware in the chain.
- `public Middleware linkWith(Middleware next)`: This method links the current middleware with the next one and returns the next middleware. It's used to build the chain.
- `public abstract boolean check(String email, String password)`: An abstract method that must be implemented by subclasses to define the middleware's specific check.
- `protected boolean checkNext(String email, String password)`: This method calls the next middleware's `check` method if it exists, or returns `true` if there is no next middleware. This method is used to pass the request down the chain.

**Middleware.java**
```
public abstract class Middleware {

    private Middleware next;

    public Middleware linkWith(Middleware next) {
        this.next = next;
        return next;
    }

    public abstract boolean check(String email, String password);

    protected boolean checkNext(String email, String password) {
        if (next == null) {
            return true;
        }
        return next.check(email, password);
    }

}
```


### `ThrottlingMiddleware.java`
This class extends `Middleware` and is responsible for limiting the number of requests per minute (throttling).

- `private int requestPerMinute;`: The maximum number of requests allowed per minute.
- `private int request;`: The current number of requests.
- `private long currentTime;`: The time when the request count was last reset.
- `public ThrottlingMiddleware(int requestPerMinute)`: Constructor to set the request limit per minute.
- `public boolean check(String email, String password)`: Overrides the `check` method. It resets the request count if a minute has passed and increments the request count. If the request limit is exceeded, it prints a message and stops the thread (though using `Thread.currentThread().stop()` is generally discouraged as it is unsafe and deprecated).

**ThrottlingMiddleware.java**
```
public class ThrottlingMiddleware extends Middleware {

    private int requestPerMinute;
    private int request;
    private long currentTime;

    public ThrottlingMiddleware(int requestPerMinute) {
        this.requestPerMinute = requestPerMinute;
        this.currentTime = System.currentTimeMillis();
    }
    @Override
    public boolean check(String email, String password) {
        if (System.currentTimeMillis() > currentTime + 60_000) {
            request = 0;
            currentTime = System.currentTimeMillis();
        }

        request++;

        if (request > requestPerMinute) {
            System.out.println("Request limit exceeded!");
            Thread.currentThread().stop();
        }
        return checkNext(email, password);
    }
}
```
### `Server.java`
This class represents a server that handles login requests.

- `private Map<String, String> users`: A map to store user email and password pairs.
- `private Middleware middleware`: The first middleware in the chain.
- `public void setMiddleware(Middleware middleware)`: Sets the first middleware in the chain.
- `public boolean logIn(String email, String password)`: Attempts to log in a user by passing the request through the middleware chain.
- `public void register(String email, String password)`: Registers a new user.
- `public boolean hasEmail(String email)` and `public boolean isValidPassword(String email, String password)`: Methods to check if an email is registered and if the password is valid, respectively.


**Server.java**
```
import java.util.HashMap;
import java.util.Map;

public class Server {
    private Map<String, String> users = new HashMap<>();

    private Middleware middleware;
    private Middleware next;
    public Middleware linkWith(Middleware next) {
        this.next = next;
        return next;
    }
    public void setMiddleware(Middleware middleware) {
        this.middleware = middleware;
    }

    public boolean logIn(String email, String password) {
        if (middleware.check(email, password)) {
            System.out.println("Authorization have been successful!");
            return true;
        }
        return false;
    }
    public void register(String email, String password) {
        users.put(email, password);
    }

    public boolean hasEmail(String email) {
        return users.containsKey(email);
    }

    public boolean isValidPassword(String email, String password) {
        return users.get(email).equals(password);
    }
}
```

### `UserExistsMiddleware.java`
This class extends `Middleware` and checks if a user exists and if the password is correct.

- `private Server server`: Reference to the server to check user credentials.
- `public UserExistsMiddleware(Server server)`: Constructor to set the server reference.
- `public boolean check(String email, String password)`: Overrides the `check` method to verify if the email exists and if the password is correct, and then passes the request to the next middleware.


**UserExistsMiddleware.java**
```
public class UserExistsMiddleware  extends Middleware{

    private Server server;
    @Override
    public boolean check(String email, String password) {
        if (!server.hasEmail(email)) {
            System.out.println("This email is not registered!");
            return false;
        }
        if (!server.isValidPassword(email, password)) {
            System.out.println("Wrong password!");
            return false;
        }
        return checkNext(email, password);
    }

    public UserExistsMiddleware(Server server) {
        this.server = server;
    }
}
```

The output you provided suggests that the user was successfully authenticated through this process.


```
Enter email: user@example.com
Input password: user_pass
Hello, user!
Authorization have been successful!
```
### Execution Flow
When the code is compiled and run, the following steps occur:

1. A `Server` instance is created and configured with a chain of middleware (not shown in the provided code but would typically include instances of `ThrottlingMiddleware` and `UserExistsMiddleware` linked together).
2. A user attempts to log in through the `Server`'s `logIn` method.
3. The request goes through the middleware chain. Each middleware performs its check (rate limiting and user existence/password validation).
4. If all checks pass, the message "Authorization have been successful!" is printed, indicating successful authentication.

