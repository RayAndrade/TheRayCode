<?php
include_once 'Content.php';
class Article extends Content
{
    private $title;

    public function __construct($title, Theme $theme) {
        parent::__construct($theme);
        $this->title = $title;
    }
    public function view(): string
    {
        return "Article titled '{$this->title}' in " . $this->theme->getColor() . " theme.";
    }
}