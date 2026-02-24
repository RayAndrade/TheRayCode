<?php
include_once 'Visitor.php';
include_once 'File.php';
include_once 'Folder.php';
class DisplayVisitor implements Visitor
{

    public function visitFile(File $file)
    {
        echo "File: " . $file->getName() . "<br>";
    }

    public function visitFolder(Folder $folder)
    {
        echo "Folder: " . $folder->getName() . "<br>";
    }
}