[up](../README.md)

We start by first creating an *interface* called **Handler**.

```php
interface Handler
{
    public function setNext(Handler $handler): Handler;
    public function handle(string $request): ?string;
}
```

Next we will create an **AbstractHandler** which will be extened with the **Handler** *interface*.

```php
class AbstractHandler implements Handler
{
    public function setNext(Handler $handler): Handler
    {
        $this->nextHandler = $handler;
        return $handler;
    }
    public function handle(string $request): ?string
    {
        if ($this->nextHandler) {
            return $this->nextHandler->handle($request);
        }
        return null;
    }
}
```


Let's create a menagerie of animals a cat, dog and a mouse.
Each would like a treat so let code a senairo.
Each will be extended with the **AbstractHandler**.
For dog we have the **DogHandler**.
```php
class DogHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Bone") {
            return "Dog: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}
```

For the cat let's create a **CatHandler**.
```php
class CatHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Catnip") {
            return "Cat: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}
```
The last animal in our menagerie will be a mouse which is the **MouseHandler**.
```php
class MouseHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Cheese") {
            return "Mouse: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}
```
![ChainOfResponsibility](/UMLs/images/ChainOfResponsibility/ChainOfResponsibility-4.png)
Let's put this altogether in the index.php

index.php
We first add the includes we need
```php
include_once ('Handler.php');
include_once ('AbstractHandler.php');

include_once('CatHandler.php');
include_once('MouseHandler.php');
include_once ('DogHandler.php');
```

Let's add a client function
```php
function clientCode(Handler $handler)
{
    foreach (["Catnip", "Bone", "Cup of coffee"] as $food) {
        echo "Client: Who wants a " . $food . "?<br/>";
        $result = $handler->handle($food);
        if ($result) {
            echo "  " . $result;
        } else {
            echo "  " . $food . " was left untouched.<br/>";
        }
    }
}
```
Now for the pla/demo we put it altogether in the following statments.

```php
$cat = new CatHandler;
$mouse = new MouseHandler;
$dog = new DogHandler;

$cat->setNext($mouse)->setNext($dog);

echo "Chain: Mouse > Cat > Dog<br/>";
clientCode($cat);
echo "<br/>";

echo "Subchain: Mouse > Dog<br/>";
clientCode($mouse);
```

Let's now look at this through a browser.
You should have:

```run
Chain: Mouse > Cat > Dog
Client: Who wants a Catnip?
Cat: I'll eat the Catnip.
Client: Who wants a Bone?
Dog: I'll eat the Bone.
Client: Who wants a Cup of coffee?
Cup of coffee was left untouched.

Subchain: Mouse > Dog
Client: Who wants a Catnip?
Catnip was left untouched.
Client: Who wants a Bone?
Dog: I'll eat the Bone.
Client: Who wants a Cup of coffee?
Cup of coffee was left untouched.
```

[Wikipedia](https://en.wikipedia.org/wiki/Chain-of-responsibility_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/TheRayCode/)

[The Ray Code](https://www.TheRayCode.com)

[Ray Andrade](https://www.TheRayCode.org)
