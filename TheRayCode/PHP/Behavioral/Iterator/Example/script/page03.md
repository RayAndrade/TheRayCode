[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **BookList.php**
```
BookList
```
This class represents a collection of Book objects. It stores books and provides methods to add or remove a book from the list.

with code:
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


[page 4](./page04.md)
