<?php
include_once "AbstractCreature.php";
class Spider extends AbstractCreature
{
    public function __construct() {
        $this->name = "spider";
        $this->reason = "that wriggled and jiggled and tickled inside her.";
    }

}