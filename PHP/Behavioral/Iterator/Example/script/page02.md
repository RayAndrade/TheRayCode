[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

To demonstrate the Iterator design pattern in PHP, we'll create a simple example that iterates over a collection of books. 

The Iterator pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

```
Book
```
**Book.php**
This class represents a single book. It's a simple class with a constructor and a getter method for the book's title.

```
private $title;

public function __construct($title) {
    $this->title = $title;
}

public function getTitle() {
    return $this->title;
}
```

[page 3](./page03.md)
