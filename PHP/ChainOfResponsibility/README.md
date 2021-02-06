# TheRayCode
TheRayCode PHP 
# TheRayCode

Let's start by creatinig the interface **Handler** and we add two method stubs to it. **Handler** and **handle** which takes a string as a parameter called **$request**.
```php
public function setNext(Handler $handler): Handler;
public function handle(string $request): ?string;
``` 
Now let's add a class file and call **AbstractHandler** let it implement the **Handler** interface. Let's autogenerate **setNext** and **Handle**. 
To the setNext method we add the following code:
```php
$this->nextHandler = $handler;
return $handler;
```
To the method handle which take a string parameter called $request and returns a string we add the following code:
```php
if ($this->nextHandler) {
    return $this->nextHandler->handle($request);
}
return null;
```
This passes the **$request** to the next **Handler** in the chain.

[RayAndrade.com](https://www.RayAndrade.com)

[RayAndrade.org](https://www.RayAndrade.org)
