# TheRayCode
## Proxy pattern php

Create interface **Subject** add code:

```php
public function request(): void;
```
create class **RealSubject** implements **Subject**
implement missing method repace TODO with

```php
echo "RealSubject: Handling request.<br/>";
```
create **Proxy** and have it **implements** **Subject** and add code to **request** function:

The most common applications of the Proxy pattern are lazy loading, caching, controlling the access, logging, etc. A Proxy can perform one of these things and then, depending on the result, pass it to the execution to the same method in a linked **RealSubject** object.

```php
if ($this->checkAccess()) {
    $this->realSubject->request();
    $this->logAccess();
}


```
The Proxy maintains a reference to the object of the **RealSubject** class. It can be either lazy-loaded or passed to the **Proxy** by the client. 
We then add code

```php
private $realSubject;

public function __construct(RealSubject $realSubject)
{
    $this->realSubject = $realSubject;
}
```
at the bottom we add:
```php
private function checkAccess(): bool
{
    // Some real checks should go here.
    echo "Proxy: Checking access prior to firing a real request.<br/>";
     return true;
}

private function logAccess(): void
{
    echo "Proxy: Logging the time of request.<br/>";
}
```
last step is to go to **index** and add the following includes
```php
include_once ('Subject.php');
include_once ('RealSubject.php');
include_once ('Proxy.php');
```
we also add the function
```php
function clientCode(Subject $subject)
{
    // ...
    $subject->request();
    // ...
}
```

and to run our demo we add:
```php
echo "Client: Executing the client code with a real subject:<br/>";
$realSubject = new RealSubject;
clientCode($realSubject);

echo "<br/>";

echo "Client: Executing the same client code with a proxy:<br/>";
$proxy = new Proxy($realSubject);
clientCode($proxy);

```
**RUN**
```php
```




[Wikipedia](https://en.wikipedia.org/wiki/Proxy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


