# TheRayCode
## Bridge pattern php

Let's create **Implementation**
```php
interface Implementation
{
    public function operationImplementation(): string;
}
```
Now let's create the *class* **Abstraction**.

```php
class Abstraction
{
    /**
     * @var Implementation
     */
    protected $implementation;

    public function __construct(Implementation $implementation)
    {
        $this->implementation = $implementation;
    }

    public function operation(): string
    {
        return "Abstraction: Base operation with:<br/>" .
            $this->implementation->operationImplementation();
    }
}
```
Now let's create some **Concrete Implementations** we call **ConcreteImplementationA** and **ConcreteImplementationB**.
Both will implement the **Implementation** interface/class.
```php
class ConcreteImplementationA implements Implementation
{
    public function operationImplementation(): string
    {
        return "ConcreteImplementationA: Here's the result on the platform A.<br/>";
    }
}
```

And for **ConcreteImplementationB**.
```php
class ConcreteImplementationB implements Implementation
{
    public function operationImplementation(): string
    {
        return "ConcreteImplementationB: Here's the result on the platform B.<br/>";
    }
}
```
![Factory](https://raw.githubusercontent.com/RayAndrade/TheRayCode/main/UMLs/images/Bridge/Bridge-1.png)


Let's Extended the Abstraction with the *class* **ExtendedAbstraction**.
```php
class ExtendedAbstraction extends Abstraction
{
    public function operation(): string
    {
        return "ExtendedAbstraction: Extended operation with:<br/>" .
            $this->implementation->operationImplementation();
    }
}
```

Now let's put this all together in the **index**.php file.

We start with the includes:
```php
include_once ('Abstraction.php');
include_once ('ExtendedAbstraction.php');
include_once ('Implementation.php');
include_once ('ConcreteImplementationA.php');
include_once ('ConcreteImplementationB.php');
```
<br/>


!RayAndrade/TheRayCode/main/UMLs/images/Bridge/Bridge-4.png)

Except for the initialization phase, where an Abstraction object gets linked with a specific Implementation object, the client code should only depend on the Abstraction class. 
This way the client code can support any abstraction implementation combination.
```php
function clientCode(Abstraction $abstraction)
{
    // ...

    echo $abstraction->operation();

    // ...
}
```

The client code should be able to work with any pre-configured abstraction implementation combination.
```php
$implementation = new ConcreteImplementationA;
$abstraction = new Abstraction($implementation);
clientCode($abstraction);

echo "<br/>";

$implementation = new ConcreteImplementationB;
$abstraction = new ExtendedAbstraction($implementation);
clientCode($abstraction);
```

When we view our code through a browser we should get:
```run
Abstraction: Base operation with:
ConcreteImplementationA: Here's the result on the platform A.

ExtendedAbstraction: Extended operation with:
ConcreteImplementationB: Here's the result on the platform B
```
The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Bridge_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
