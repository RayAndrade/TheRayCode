<?php
require_once('Component.php');
class Leaf extends Component
{

    public function operation()
    {
        return "Leaf " . $this->name . " is operated.<br/>";
    }
}