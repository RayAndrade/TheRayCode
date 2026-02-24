<?php

class Forest
{
    private array $trees = [];

    public function plantTree(int $x, int $y, string $name, string $color, string $texture): void
    {
        $type = TreeFactory::getTreeType($name, $color, $texture);
        $tree = new Tree($x, $y, $type);
        $this->trees[] = $tree;
    }

    public function draw(string $canvas): void
    {
        foreach ($this->trees as $tree) {
            $tree->draw($canvas);
        }
    }
}