# TheRayCode
TheRayCode java 
create package **middleware**

create class **abstract class Middleware** have it
add:
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

create class **ThrottlingMiddleware** have it **extends Middleware**
override **check** (String email, String password) with
add:
```java
private int requestPerMinute;
private int request;
private long currentTime;
```
and add the method:
```java
public ThrottlingMiddleware(int requestPerMinute) {
    this.requestPerMinute = requestPerMinute;
    this.currentTime = System.currentTimeMillis();
 }
```
and then to the overide we add:
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
