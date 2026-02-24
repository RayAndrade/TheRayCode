<?php
include_once 'Element.php';
class Folder implements Element
{
    private $name;
    private $elements = [];

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function addElement(Element $element) {
        $this->elements[] = $element;
    }

    public function getElements() {
        return $this->elements;
    }
    public function accept(Visitor $visitor)
    {
        $visitor->visitFolder($this);
        foreach ($this->elements as $element) {
            $element->accept($visitor);
        }
    }
}