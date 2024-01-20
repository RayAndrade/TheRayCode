<?php

class Book
{
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