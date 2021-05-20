# TheRayCode
## Iterator pattern c#
The abstract key Returns the key of the current element.
The **Current** object returns the current element.
**MoveNext** moves forward to next element.
**Reset** rewinds the Iterator to the first element.

```c#
abstract class Iterator : IEnumerator
{
    object IEnumerator.Current => Current();
    public abstract int Key();
    public abstract object Current();
    public abstract bool MoveNext();
    public abstract void Reset();
}
```
Returns an Iterator or another IteratorAggregate for the implementing object.
```c#
abstract class IteratorAggregate : IEnumerable
{
    public abstract IEnumerator GetEnumerator();
}
```

Concrete Iterators implement various traversal algorithms. 
These classes store the current traversal position at all times.

The varables stores the current traversal position. 
An iterator may have a lot of other fields for storing iteration state, especially when it is supposed to work with a particular kind of collection.

```c#
class AlphabeticalOrderIterator : Iterator
{
    private WordsCollection _collection;
    private int _position = -1;
    private bool _reverse = false;
    public AlphabeticalOrderIterator(WordsCollection collection, bool reverse = false)
    {
        this._collection = collection;
        this._reverse = reverse;
        if (reverse)
        {
            this._position = collection.getItems().Count;
        }
    }
    public override object Current()
    {
        return this._collection.getItems()[_position];
    }
    public override int Key()
    {
        return this._position;
    }
    public override bool MoveNext()
    {
        int updatedPosition = this._position + (this._reverse ? -1 : 1);
        if (updatedPosition >= 0 && updatedPosition < this._collection.getItems().Count)
        {
            this._position = updatedPosition;
            return true;
        }
        else
        {
            return false;
        }
   }
   public override void Reset()
   {
        this._position = this._reverse ? this._collection.getItems().Count - 1 : 0;
   }
}
```

Concrete Collections provide one or several methods for retrieving fresh iterator instances, compatible with the collection class.

```c#
class WordsCollection : IteratorAggregate
{
    List<string> _collection = new List<string>();
    bool _direction = false;
    public void ReverseDirection()
    {
        _direction = !_direction;
    }
    public List<string> getItems()
    {
        return _collection;
    }
    public void AddItem(string item)
    {
        this._collection.Add(item);
    }
    public override IEnumerator GetEnumerator()
    {
        return new AlphabeticalOrderIterator(this, _direction);
    }
}
```

Let's put this all together in the **Main** method.
The client code may or may not know about the Concrete Iterator or Collection classes, depending on the level of indirection you want to keep in your program.

```c#
static void Main(string[] args)
{
    var collection = new WordsCollection();
    collection.AddItem("A");
    collection.AddItem("B");
    collection.AddItem("C");
    Console.WriteLine("Forward traversal:");
    foreach (var element in collection)
    {
        Console.WriteLine(element);
    }
    Console.WriteLine("\nReverse traversal:");
    collection.ReverseDirection();
    foreach (var element in collection)
    {
        Console.WriteLine(element);
    }
}
```

Let's compile this and run. We should get:
```run
Forward traversal:
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
