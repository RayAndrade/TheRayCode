<?php
include_once 'Component.php';
class Leaf extends Component
{

    public function draw(): void
    {
        echo "Drawing " . $this->name . "<br>";
    }
}