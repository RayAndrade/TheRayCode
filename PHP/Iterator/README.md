# TheRayCode
## Iterator pattern php

The Iterator design patterns is a behavioral design pattern that lets you traverse elements of a collection without exposing its underlying representation (list, stack, tree, etc.).
Concrete Iterators implement various traversal algorithms. 
These classes store the current traversal position at all times.
 
 Stores the current traversal position. 
 An iterator may have a lot of other fields for storing iteration state, especially when it is supposed to work with a particular kind of collection.
 
 
```php
 class AlphabeticalOrderIterator implements \Iterator
{
    private $collection;
    private $position = 0;
    private $reverse = false;
    public function __construct($collection, $reverse = false)
    {
        $this->collection = $collection;
        $this->reverse = $reverse;
    }
    public function rewind()
    {
        $this->position = $this->reverse ?
            count($this->collection->getItems()) - 1 : 0;
    }
    public function current()
    {
        return $this->collection->getItems()[$this->position];
    }
    public function key()
    {
        return $this->position;
    }
    public function next()
    {
        $this->position = $this->position + ($this->reverse ? -1 : 1);
    }
    public function valid()
    {
        return isset($this->collection->getItems()[$this->position]);
    }
}
```
![Iterator](/UMLs/images/Iterator/Iterator-4.png)

Concrete Collections provide one or several methods for retrieving fresh iterator instances, compatible with the collection class.

```php
<?php
class WordsCollection implements \IteratorAggregate
{
    private $items = [];
    public function getItems()
    {
        return $this->items;
    }
    public function addItem($item)
    {
        $this->items[] = $item;
    }
    public function getIterator(): Iterator
    {
        return new AlphabeticalOrderIterator($this);
    }
    public function getReverseIterator(): Iterator
    {
        return new AlphabeticalOrderIterator($this, true);
    }
}
```

The client code may or may not know about the Concrete Iterator or Collection classes, depending on the level of indirection you want to keep in your program.
```php
include_once ('AlphabeticalOrderIterator.php');
include_once ('WordsCollection.php');

$collection = new WordsCollection;
$collection->addItem("A");
$collection->addItem("B");
$collection->addItem("C");

echo "Straight traversal:<br/>";
foreach ($collection->getIterator() as $item) {
    echo $item . "<br/>";
}

echo "<br/>";
echo "Reverse traversal:<br/>";
foreach ($collection->getReverseIterator() as $item) {
    echo $item . "<br/>";
```
When we veiw this through a browser we get:
```run
Straight traversal:
A
B
C

Reverse traversal:
C
B
A
```
The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Iterator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
