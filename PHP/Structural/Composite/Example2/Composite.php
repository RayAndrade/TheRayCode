<?php
include_once 'Component.php';
class Composite extends Component
{
    private $children = [];

    public function add(Component $component): void {
        array_push($this->children, $component);
    }

    public function remove(Component $component): void {
        $this->children = array_filter($this->children, function ($child) use ($component) {
            return $child !== $component;
        });
    }

    public function draw(): void {
        echo "Drawing " . $this->name . "<br>";
        foreach ($this->children as $child) {
            $child->draw();
        }
    }
}