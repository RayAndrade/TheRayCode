[top](../README.md) | [script](script/page01.md)

To demonstrate the Iterator design pattern in PHP, we'll create a simple example that iterates over a collection of books. The Iterator pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

### Project Structure

1. `Book.php` - Represents a single book.
2. `BookList.php` - Represents a collection of books.
3. `BookListIterator.php` - An iterator for the BookList.
4. `index.php` - Demonstrates the usage of the iterator.

### Step-by-Step Creation and Explanation

#### 1. Book.php

This class represents a single book. It's a simple class with a constructor and a getter method for the book's title.

```php
<?php

class Book {
    private $title;

    public function __construct($title) {
        $this->title = $title;
    }

    public function getTitle() {
        return $this->title;
    }
}
```

#### 2. BookList.php

This class represents a collection of `Book` objects. It stores books and provides methods to add or remove a book from the list.

```php
<?php

class BookList {
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
}
```

#### 3. BookListIterator.php

This class implements the iterator for `BookList`. It allows traversing over the `BookList` collection.

```php
<?php

class BookListIterator {
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
}
```

#### 4. index.php

This file demonstrates the usage of the above classes. It creates a list of books, adds them to the `BookList`, and then iterates over them using `BookListIterator`.

```php
<?php

require_once 'Book.php';
require_once 'BookList.php';
require_once 'BookListIterator.php';

// Create book list and add books
$bookList = new BookList();
$bookList->addBook(new Book("1984"));
$bookList->addBook(new Book("To Kill a Mockingbird"));
$bookList->addBook(new Book("The Great Gatsby"));

// Iterate over book list
$iterator = new BookListIterator($bookList);
while ($iterator->hasNext()) {
    $book = $iterator->next();
    echo $book->getTitle() . "\n";
}
```

### Running the Code

When you run `index.php`, you should see the titles of the books printed one after the other:

```
1984
To Kill a Mockingbird
The Great Gatsby
```

This output demonstrates the Iterator pattern in action, allowing you to sequentially access elements of the `BookList` without exposing its internal structure.
