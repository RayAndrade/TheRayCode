<?php
include_once 'Element.php';
class File implements Element
{
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function accept(Visitor $visitor)
    {
        $visitor->visitFile($this);
    }
}