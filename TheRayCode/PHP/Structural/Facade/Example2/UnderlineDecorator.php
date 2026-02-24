<?php

class UnderlineDecorator implements TextDecorator
{

    public function decorate($text)
    {
        return "<u>$text</u>";
    }
}