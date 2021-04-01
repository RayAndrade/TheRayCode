# TheRayCode
## Prototype pattern php

Let's start by added a php class file we call **Prototype**.php.

PHP has built-in cloning support. 
You can *clone* an object without defining any special methods as long as it has fields of *primitive types*.
**Fields** containing objects retain their references in a cloned object.
Therefore, in some cases, you might want to clone those referenced objects as well. 
You can do this in a special *__clone()* method.
```php
class Prototype
{
    public $primitive;
    public $component;
    public $circularReference;

    public function __clone()
    {
        $this->component = clone $this->component;
        $this->circularReference = clone $this->circularReference;
        $this->circularReference->prototype = $this;
    }
}
```
Let's create another file we call **ComponentWithBackReference**.php.
Note that the constructor won't be executed during cloning. 
If you have complex logic inside the constructor, you may need to execute it in the *__clone* method as well.

The code for this file is:
```php
class ComponentWithBackReference
{
    public $prototype;
    public function __construct(Prototype $prototype)
    {
        $this->prototype = $prototype;
    }
}

```
<img src="..TheRayCode/UMLs/images/Prototype119-java.png"/>
At the top of the index.php file we add a couple of includes to inclued the files we *just* created.
```php
include_once ('Prototype.php');
include_once ('ComponentWithBackReference.php');
```

We now add some client code to our index.php file.
```php
function clientCode()
{
    $p1 = new Prototype;
    $p1->primitive = 245;
    $p1->component = new \DateTime;
    $p1->circularReference = new ComponentWithBackReference($p1);

    $p2 = clone $p1;
    if ($p1->primitive === $p2->primitive) {
        echo "Primitive field values have been carried over to a clone. Yay!<br/>";
    } else {
        echo "Primitive field values have not been copied. Booo!<br/>";
    }
    if ($p1->component === $p2->component) {
        echo "Simple component has not been cloned. Booo!<br/>";
    } else {
        echo "Simple component has been cloned. Yay!<br/>";
    }

    if ($p1->circularReference === $p2->circularReference) {
        echo "Component with back reference has not been cloned. Booo!\n";
    } else {
        echo "Component with back reference has been cloned. Yay!\n";
    }

    if ($p1->circularReference->prototype === $p2->circularReference->prototype) {
        echo "Component with back reference is linked to original object. Booo!\n";
    } else {
        echo "Component with back reference is linked to the clone. Yay!\n";
    }
}
```

add:
```php
clientCode();
```
to run this piece of code. Our result is:
```result
Primitive field values have been carried over to a clone. Yay!
Simple component has been cloned. Yay!
Component with back reference has been cloned. Yay! Component with back reference is linked to the clone. Yay!
```
Tell a friend "The Ray Code is AWESOME!!!"


[Wikipedia](https://en.wikipedia.org/wiki/Prototype_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
