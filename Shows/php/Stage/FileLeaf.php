<?php
require_once 'FileComponent.php';
class FileLeaf implements FileComponent
{
    private $name;
    private $size;

    public function __construct($name, $size) {
        $this->name = $name;
        $this->size = $size;
    }



    public function getSize()
    {
        return $this->size;
    }

    public function getName()
    {
        return $this->name;
    }
}