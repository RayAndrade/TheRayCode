<?php
include_once ('Component.php');
class Leaf extends Component
{

    public function operation(): string
    {
        return "Leaf";
    }
}