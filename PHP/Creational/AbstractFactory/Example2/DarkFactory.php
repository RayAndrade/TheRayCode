<?php

include_once 'GUIFactory.php';
include_once 'DarkButton.php';
include_once 'DarkCheckbox.php';

class DarkFactory implements GUIFactory
{

    public function createButton()
    {
        return new DarkButton();
    }

    public function createCheckbox()
    {
        return new DarkCheckbox();
    }
}