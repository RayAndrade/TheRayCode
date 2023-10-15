<?php

class Facade
{
    public static function decorateText($text, $decorators) {
        foreach ($decorators as $decorator) {
            $text = $decorator->decorate($text);
        }
        return $text;
    }
}