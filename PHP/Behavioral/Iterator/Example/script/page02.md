[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

To demonstrate the Iterator design pattern in PHP, we'll create a simple example that iterates over a collection of books. 

The Iterator pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

```
Book
```
**Book.php**
This class represents a single book. It's a simple class with a constructor and a getter method for the book's title.

```
private $books = [];
private $currentIndex = 0;

public function addBook(Book $book) {
    $this->books[] = $book;
}

public function removeBook(Book $book) {
    foreach ($this->books as $key => $b) {
        if ($b->getTitle() === $book->getTitle()) {
            unset($this->books[$key]);
        }
    }
    $this->books = array_values($this->books);
}

public function count() {
    return count($this->books);
}

public function getBook($index) {
   if (isset($this->books[$index])) {
       return $this->books[$index];
    }
    return null;
}
```
We create:<br/>
addBook<br/>
removeBook<br/>
count<br/>
getBook

[page 3](./page03.md)
