# TheRayCode
TheRayCode java 
create package **middleware**
create public **abstract class Middleware**
create public class **ThrottlingMiddleware**
create public class **UserExistsMiddleware**

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
