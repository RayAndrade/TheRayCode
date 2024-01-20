[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **class**
```
BookListIterator
```
This class implements the iterator for `BookList`. It allows traversing over the `BookList` collection.

add code:
```
private $bookList;
private $currentBook = 0;

public function __construct(BookList $bookList) {
    $this->bookList = $bookList;
}

public function hasNext() {
    return $this->currentBook < $this->bookList->count();
}

public function next() {
    return $this->bookList->getBook($this->currentBook++);
}
```
for<br/>
construct<br/>
Next<br/>
hasNext

[page 4](./page04.md)
