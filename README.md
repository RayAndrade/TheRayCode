# TheRayCode Java

Here you will find all the code I use at the <http://rayandrade.com> homepage.
You can also email me: <TheRayCode@RayAndrade.com>

In this artical I plan to review the design pattern Chain of Reponsibity as discribed by the Gang Of Four.
For this example I will use the programing language java.
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
```php
public ThrottlingMiddleware(int requestPerMinute) {
    this.requestPerMinute = requestPerMinute;
    this.currentTime = System.currentTimeMillis();
 }
```
```cpp
public ThrottlingMiddleware(int requestPerMinute) {
    this.requestPerMinute = requestPerMinute;
    this.currentTime = System.currentTimeMillis();
 }
```
```cs
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
