<?php
require_once 'Tree.php';
require_once 'TreeFactory.php';
class Forest
{
    private array $trees = [];
    private TreeFactory $treeFactory;

    public function __construct() {
        $this->treeFactory = new TreeFactory();
    }

    public function plantTree(int $x, int $y, string $name, string $color, string $texture): void {
        $type = $this->treeFactory->getTreeType($name, $color, $texture);
        $tree = new Tree($x, $y, $type);
        $this->trees[] = $tree;
    }

    public function render(): string {
        $output = '';
        foreach ($this->trees as $tree) {
            $output .= $tree->render();
        }
        return $output;
    }
}