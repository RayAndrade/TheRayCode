<?php
include_once 'GUIFactory.php';
include_once 'LightButton.php';
include_once 'LightCheckbox.php';
class LightFactory implements GUIFactory
{

    public function createButton()
    {
        return new LightButton();
    }

    public function createCheckbox()
    {
        return new LightCheckbox();
    }
}