<?php

abstract class Content
{
    protected $theme;

    public function __construct(Theme $theme) {
        $this->theme = $theme;
    }

    abstract public function view(): string;
}