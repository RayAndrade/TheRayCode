<?php

class BookListIterator
{
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