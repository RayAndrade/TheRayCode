# TheRayCode
## Adapter Factory php

We start with *class* **Adaptee**.
The **Adaptee** has a message that we can't *currently* read.
```php
class Adaptee
{
   public function specificRequest(): string
   {
      return ".eetpadA eht fo roivaheb laicepS";
   }
}
```
Next we move to our **Target** class, which we need to create.
We create the **Target** class with the following code:
```php
class Target
{
   public function request(): string
   {
      return "Target: The default target's behavior.";
   }
}
```
Next we move to the **Adapter**.
The **Adapter** will do the translation for use using the *strrev* utility.
We create the **Adapter** class which will be extended by **Target**.
```php
class Adapter extends Target
{
    private $adaptee;

    public function __construct(Adaptee $adaptee)
    {
        $this->adaptee = $adaptee;
    }

    public function request(): string
    {
        return "Adapter: (TRANSLATED) " . strrev($this->adaptee->specificRequest());
    }
}
```

![Adapter](https://raw.githubusercontent.com/RayAndrade/TheRayCode/main/UMLs/images/Adapter141.png)

Now let's put this all together in the **index**.php file.
We start by listiing our *includes* files we just created.
```php
include_once ('Target.php');
include_once ('Adaptee.php');
include_once ('Adapter.php');
```
The client code supports all classes that follow the Target interface.
```php
function clientCode(Target $target)
{
echo $target->request();
}


echo "Client: I can work just fine with the Target objects:<br/>";
$target = new Target;

clientCode($target);

echo "<br/><br/>";

$adaptee = new Adaptee;
echo "Client: The Adaptee class has a weird interface. See, I don't understand it:<br/>";
echo "Adaptee: " . $adaptee->specificRequest();
echo "<br/><br/>";

echo "Client: But I can work with it via the Adapter:<br/>";
$adapter = new Adapter($adaptee);
clientCode($adapter);

echo "<br/><br/>";
```

Now if we view our code trough a browser we should see:
```run
Client: I can work just fine with the Target objects:
Target: The default target's behavior.

Client: The Adaptee class has a weird interface. See, I don't understand it:
Adaptee: .eetpadA eht fo roivaheb laicepS

Client: But I can work with it via the Adapter:
Adapter: (TRANSLATED) Special behavior of the Adaptee.
```
The Ray Code is AWESOME!!

[Wikipedia](https://en.wikipedia.org/wiki/Adapter_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
