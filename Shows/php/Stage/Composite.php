<?php
require_once('Component.php');
class Composite extends Component
{

    private $children = [];

    public function add(Component $component) {
        $this->children[] = $component;
    }

    public function remove(Component $component) {
        $this->children = array_filter($this->children, function($child) use ($component) {
            return $child !== $component;
        });
    }

    public function getChild($i) {
        return $this->children[$i] ?? null;
    }

    public function operation()
    {
        $result = "Branch " . $this->name . ":<br/>";
        foreach ($this->children as $child) {
            $result .= $child->operation();
        }
        return $result;
    }
}