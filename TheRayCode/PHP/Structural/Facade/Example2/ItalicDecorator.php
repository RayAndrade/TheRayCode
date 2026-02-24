<?php

class ItalicDecorator implements TextDecorator
{

    public function decorate($text)
    {
        return "<em>$text</em>";
    }
}