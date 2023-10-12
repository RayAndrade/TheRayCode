<?php
include_once 'Content.php';
class Video extends Content
{
    private $name;

    public function __construct($name, Theme $theme) {
        parent::__construct($theme);
        $this->name = $name;
    }

    public function view(): string
    {
        return "Video named '{$this->name}' in " . $this->theme->getColor() . " theme.";
    }
}