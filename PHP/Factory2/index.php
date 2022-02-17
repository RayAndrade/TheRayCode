<?php
/**
 * https://www.youtube.com/watch?v=H5lor4wyl1Y
 * Factory Pattern - Object Oriented PHP Tutorial
 */

class Book{
    private $bookName;
    private $bookAuthor;
    const BR = '<br />';

    public function __construct($name, $author){
        $this->bookName = $name;
        $this->bookAuthor= $author;
    }
    public function getNameAndAuthor(){
        return $this->bookName .' - '. $this->bookAuthor.self::BR;
    }

}

class BookFactory{
    public static function create($name, $author){
        return new Book($name,$author);
    }

}

$book1= BookFactory::create('The Humming Effect', 'Jonathan Goldman');
$book2 = BookFactory::create('The healing Power of Breath','Richard Brown');

echo $book1->getNameAndAuthor();
echo $book2->getNameAndAuthor();

