<?php

class BoldDecorator implements TextDecorator
{

    public function decorate($text)
    {
        return "<strong>$text</strong>";
    }
}