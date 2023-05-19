# TheRayCode is AWESOME!!!

**Abstract Factory**

**[PHP](../README.md)**  

**[Creational Patterns](../README.md)** * **[Structural Patterns](../../Structural/README.md)** * **[Behavioral Patterns](../../Behavioral/README.md)**

**PHP Creational Patterns**

 * **[Factory](../Factory/README.md)**
 * **[AbstractFactory](../AbstractFactory/README.md)**
 * **[Builder](../Builder/README.md)**
 * **[Prototype](../Prototype/README.md)**
 * **[Singleton](../Singleton/README.md)**

**PHP Abstract Factory Design Pattern**

Let's start by creating the objects we want are factory to produce.

```php
interface Cat
{
    public function meow(): string;
}
```
 the other object we add sill be a dog
 
```php
 interface Dog
{
    public function bark(): string;
}
```
So for our pattern to go into action we create an **AbstractPetFactory**.


```php
interface AbstractPetFactory
{
    public function createCat(): Cat;
    public function createDog(): Dog;
}
```

so let's create a **CatFactory**.

```php
class CatFactory implements AbstractPetFactory {
    public function createCat(): Cat {
        return new class implements Cat {
            public function meow(): string {
                return 'Meow! I am a Persian cat.';
            }
        };
    }

    public function createDog(): Dog {
        throw new Exception('Cannot create dogs from a cat factory');
    }
}
```
Now we create a **DogFactory**

```php
class DogFactory implements AbstractPetFactory {
    public function createCat(): Cat {
        throw new Exception('Cannot create cats from a dog factory');
    }

    public function createDog(): Dog {
        return new class implements Dog {
            public function bark(): string {
                return 'Woof! I am a Labrador.';
            }
        };
    }
}
```
Let's now put a demo in the Demo.php file.

```php
require_once 'AbstractPetFactory.php';
require_once 'DogFactory.php';
require_once 'CatFactory.php';


class Demo {
    public static function run() {
        $dogFactory = new DogFactory();
        $catFactory = new CatFactory();

        $dog = $dogFactory->createDog();
        echo $dog->bark() . "<br/>\n";

        $cat = $catFactory->createCat();
        echo $cat->meow() . "<br/>\n";
    }
}

Demo::run();

```


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)


[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
