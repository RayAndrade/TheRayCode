<?php

require_once 'FileComponent.php';

class DirectoryComposite implements FileComponent
{
    private $name;
    private $children;

    public function __construct($name) {
        $this->name = $name;
        $this->children = [];
    }

    public function add(FileComponent $component) {
        $this->children[] = $component;
    }

    public function getSize()
    {
        $totalSize = 0;
        foreach ($this->children as $child) {
            $totalSize += $child->getSize();
        }
        return $totalSize;
    }

    public function getName()
    {
        return $this->name;
    }
}