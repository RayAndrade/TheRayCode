<?php
include('Component.php');

class Composite extends Component
{
    protected $children;

    public function __construct()
    {
        $this->children = new \SplObjectStorage();
    }

    public function remove(Component $component): void
    {
        $this->children->detach($component);
        $component->setParent(null);
    }

    public function isComposite(): bool
    {
        return true;
    }
    public function operation(): string
    {
        $results = [];
        foreach ($this->children as $child) {
            $results[] = $child->operation();
        }
        return "Branch(" . implode("+", $results) . ")";
    }
}