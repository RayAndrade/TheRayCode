# TheRayCode Java

Hi, I'm Ray and this is my code for the project I call The Ray Code.

Here are some of my social media accounts.

([youtube](https://www.youtube.com/TheRayCode/))

([Twitter](https://twitter.com/TheRayCode))

([Facebook](https://www.Facebook.com/TheRayCode/))

([pinterest](https://www.pinterest.com/TheRayCode/))

([instagram](https://www.instagram.com/the_ray_code/))

https://rayandrade.com/

https://rayandrade.org/



name: PHP Composer

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2

    - name: Validate composer.json and composer.lock
      run: composer validate --strict

    - name: Cache Composer packages
      id: composer-cache
      uses: actions/cache@v2
      with:
        path: vendor
        key: ${{ runner.os }}-php-${{ hashFiles('**/composer.lock') }}
        restore-keys: |
          ${{ runner.os }}-php-

    - name: Install dependencies
      run: composer install --prefer-dist --no-progress

    # Add a test script to composer.json, for instance: "test": "vendor/bin/phpunit"
    # Docs: https://getcomposer.org/doc/articles/scripts.md

    # - name: Run test suite
    #   run: composer run-script test



To make a link, place the link text in brackets and the url in parentheses ([Facebook](https://www.Facebook.com/TheRayCode/))

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
