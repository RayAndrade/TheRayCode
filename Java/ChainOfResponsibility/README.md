# TheRayCode
In this example I want to create a system that authorizes a user as administrator or basic user. 
First we should create some packages to hold our code.
The packages I want to create are called **middleware** and **server**.
These packages will be areas where we will add our java code files.
Now let's create some *class* files.
 
The first class file I want to create will be an abstract class  file we call: **Middleware**. 
Inside of the class we add the following code java class:

```java
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

```

The **linkwith** method takes the parameter **checkNext** and the parameter value gets returned as **next**.
In the  checkNext method it chect to see if the parameter are of a certian type. There are only 2 users, an admin and a user.
So for those at home, don't expect to put this demo into production.

Now create a class named **ThrottlingMiddleware** and have it **extend**s **Middleware**.
Override **check (String email, String password)** replace return false with:

```java
private int requestPerMinute;
private int request;
private long currentTime;
```
and now we add the method:
```java
public ThrottlingMiddleware(int requestPerMinute) {
    this.requestPerMinute = requestPerMinute;
    this.currentTime = System.currentTimeMillis();
 }
```
The next add is to the override method **check** we repace the **return false** with:
```java
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
```
create paclkage called server and add class **Server** to it do the following imports:
```java
import java.util.HashMap;
import java.util.Map;
import TheRayCode.ChainOfResponsibility.middleware.Middleware;
```
add code:
```java
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
```

create class **UserExistsMiddleware** have it **extends Middleware**
override **check** (String email, String password) with:
```java
if (!server.hasEmail(email)) {
    System.out.println("This email is not registered!");
    return false;
}
if (!server.isValidPassword(email, password)) {
    System.out.println("Wrong password!");
    return false;
}
return checkNext(email, password);
```
add:
```java
private Server server;
```
and
```java

public UserExistsMiddleware(Server server) {
        this.server = server;
 }

```



create class **RoleCheckMiddleware** have it **extends Middleware**
override **check** (String email, String password) with:
```java
if (email.equals("admin@example.com")) {
  System.out.println("Hello, admin!");
  return true;
}
System.out.println("Hello, user!");
return checkNext(email, password);
```
create paclage **server** add class **Server**
go to **Demo** add imports:
```java
import TheRayCode.ChainOfResponsibility.middleware.Middleware;
import TheRayCode.ChainOfResponsibility.middleware.RoleCheckMiddleware;
import TheRayCode.ChainOfResponsibility.middleware.ThrottlingMiddleware;
import TheRayCode.ChainOfResponsibility.middleware.UserExistsMiddleware;
import TheRayCode.ChainOfResponsibility.server.Server;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

```
to the class **Demo**
```java
public static void main(String[] args) { }
```
add:
```java
throws IOException
```
add local method:
```java
private static void init() { }
```
let now add some code to this method
```java
server = new Server();
server.register("admin@example.com", "admin_pass");
server.register("user@example.com", "user_pass");
```
and..
```java
Middleware middleware = new ThrottlingMiddleware(2);
middleware.linkWith(new UserExistsMiddleware(server)).linkWith(new RoleCheckMiddleware());
server.setMiddleware(middleware);
```
let's add some more code to the **main** method

```java
init();

boolean success;
do {
    System.out.print("Enter email: ");
    String email = reader.readLine();
    System.out.print("Input password: ");
    String password = reader.readLine();
    success = server.logIn(email, password);
} while (!success);

```


[TheRayCode](https://www.TheRayCode.com)
