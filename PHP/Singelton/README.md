# TheRayCode
## Singleton PHP

With the Singelton design pattern we want to ensure that a class has only one instance, while providing a global access point to this instance.

The Singleton's instance is stored in a static field. 
For this demonstration we make the field is an array, because we'll allow our Singleton to have subclasses. 
Each item in this array will be an instance of a specific **Singleton**'s subclass. 
You'll see how this works in a moment.
```php
private static $instances = [];
```
The Singleton's constructor should always be private to prevent direct construction calls with the `new` operator.
```php
protected function __construct() { }
```
Singletons should not be cloneable.
```php
protected function __clone() { }
```
Singletons should not be restorable from strings.
```php
public function __wakeup()
{
   throw new \Exception("Cannot unserialize a singleton.");
}
```
This is the static method that controls the access to the singleton's instance. 
On the first run, it creates a singleton object and places it into the static field. 
On <i>subsequent runs</i> it returns the clients existing object stored in that static field.

This implementation lets you subclass the Singleton class while keeping only **one** instance of each subclass around.

```php
public static function getInstance(): Singleton
{
    $cls = static::class;
    if (!isset(self::$instances[$cls])) {
       self::$instances[$cls] = new static;
    }
    return self::$instances[$cls];
}
```
Finally, any singleton should define some business logic which can be executed on its instantiation.

```php
public function someBusinessLogic()
{
    // ...
}
```
Now let's put this altogether in the **index**.php.
We want to attempt to create two different singleton objects.
After we create them, then we will compair them.

The Singleton class defines the *GetInstance* method that serves as an alternative to constructor and lets clients access the same instance of this class over and over.

The code in the index.php file will be:
```php
include_once ('Singleton.php');

function clientCode()
{
    $s1 = Singleton::getInstance();
    $s2 = Singleton::getInstance();
    if ($s1 === $s2) {
        echo "Singleton works, both variables contain the same instance.";
    } else {
        echo "Singleton failed, variables contain different instances.";
    }
}

```
Now let's finish this project by making a call to **clientCode**
```php
clientCode();
```
Our result when we browse to the **index**.php is:

```
Singleton works, both variables contain the same instance.
```


[Wikipedia](https://en.wikipedia.org/wiki/Singleton_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


