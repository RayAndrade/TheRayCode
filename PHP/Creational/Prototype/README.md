# TheRayCode is AWESOME!!!

**[PHP](../README.md)**  

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**PHP Creational Patterns**


|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Prototype** | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |

[show](./script/page01.md)

 I'm going to demonstrate this using a simple **Clown** class, which will have one property, a nested catch phrase.

Here is the structure for the project

```
/project
|-- Clown.php
|-- Phrase.php
`-- index.php
```

Here is that example:

The **Phrase** class is straightforward. It's a simple class with a phrase property.

```
class Phrase
{
    public $phrase;

    public function __construct($phrase) {
        $this->phrase = $phrase;
    }
}
```
The **Clown** class has two properties: name (a string) and nose (an instance of the Nose class). 
We also have a magic method **__clone()** for shallow cloning and a **deepClone()** method for deep cloning.

When you clone an object in PHP, by default it does a shallow copy. 
A shallow copy means creating a new object and then copying the non-static fields of the current object to the new object. 
If a field is a value type, a bit-by-bit copy of the field is performed; If a field is a reference type, the reference is copied but the referred object is not; hence the original and its clone refer to the same object.

```
class Clown
{
    public $name;
    public $chatchPrase;

    public function __construct($name, Phrase $prase) {
        $this->name = $name;
        $this->chatchPrase = $prase;
    }

    // Shallow clone
    public function __clone() {
        // When you clone the Clown object, PHP does a shallow copy by default.
    }

    // Deep clone
    public function deepClone() {
        $cloned = clone $this;
        $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
        return $cloned;
    }
}
```

In the **index.php** file, we first create an instance of the Clown class named bozoClown. 
Then we create a shallow clone (bozoShallowClone) and a deep clone (bozoDeepClone) of this object.

We then change the color of the nose property on the original **bozoClown**. 
After that, we print the color of the nose property for the original, the shallow clone, and the deep clone.

Because the shallow clone only copied the reference to the **Prase** object, when we change the color of the nose in the original bozoClown, it is also changed in the bozoShallowClone (they both point to the same Nose object).

However, in the deep clone, we manually cloned the Nose object as well, so bozoDeepClone has its own Nose object, and changes to the original bozoClown's nose do not affect it.



[TheRayCode.ORG](https://www.TheRayCode.org)  

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
