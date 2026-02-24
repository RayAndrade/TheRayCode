<?php
require_once 'TreeType.php';
class TreeFactory
{
    private array $treeTypes = [];

    public function getTreeType(string $name, string $color, string $texture): TreeType {
        $key = md5($name . $color . $texture);

        if (!isset($this->treeTypes[$key])) {
            $this->treeTypes[$key] = new TreeType($name, $color, $texture);
        }

        return $this->treeTypes[$key];
    }
}