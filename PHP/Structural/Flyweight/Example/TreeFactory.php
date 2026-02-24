<?php

class TreeFactory
{
    private static array $treeTypes = [];

    public static function getTreeType(string $name, string $color, string $texture): TreeType
    {
        $key = $name . $color . $texture;

        if (!isset(self::$treeTypes[$key])) {
            self::$treeTypes[$key] = new TreeType($name, $color, $texture);
        }

        return self::$treeTypes[$key];
    }
}