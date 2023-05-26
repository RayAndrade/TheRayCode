<?php
// prototype.php

class Prototype {

    protected $title;
    protected $author;

    public function setTitle($title) {
        $this->title = $title;
    }

    public function getTitle() {
        return $this->title;
    }

    public function setAuthor($author) {
        $this->author = $author;
    }

    public function getAuthor() {
        return $this->author;
    }

    public function __clone() {
        $this->title = clone $this->title;
        $this->author = clone $this->author;
    }
}
