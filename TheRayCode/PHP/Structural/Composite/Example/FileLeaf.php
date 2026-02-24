<?php
require_once 'FileComponent.php';

// The Leaf class represents end objects of a composition. A leaf can't have
// any children. Typically, Leaf objects do the actual work, while Composite
// objects only delegate to their sub-components.

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