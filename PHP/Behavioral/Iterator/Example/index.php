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
    echo $book->getTitle() . "<br/>";
}