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

Next I want to add three other other classes to create a chain for me to demo.
The first of these classes will be call the **DogHandler** and let's extend it with the **AbstractHandler**. 
Because this is extended with the **AbstractHandler** we need to add the function **handle** which takes the string parameter **request**.
To this method we add the following code:
```php
if ($request === "MeatBall") {
   return "Dog: I'll eat the " . $request . ".\n";
   } else {
   return parent::handle($request);
   }
```

[RayAndrade.com](https://www.RayAndrade.com)

[RayAndrade.org](https://www.RayAndrade.org)
