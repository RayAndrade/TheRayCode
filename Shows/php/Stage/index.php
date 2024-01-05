<?php

require_once 'FileLeaf.php';
require_once 'DirectoryComposite.php';

$file1 = new FileLeaf("File1.txt", 210);
$file2 = new FileLeaf("File2.txt", 310);

$directory = new DirectoryComposite("Directory");
$directory->add($file1);
$directory->add($file2);

$subdirectory = new DirectoryComposite("Subdirectory");
$subdirectory->add(new FileLeaf("SubFile1.txt", 110));
$directory->add($subdirectory);

echo "Total Size of '" . $directory->getName() . "': " . $directory->getSize() . " bytes";

