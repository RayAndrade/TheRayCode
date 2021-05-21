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
 
[Wikipedia](https://en.wikipedia.org/wiki/Iterator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
