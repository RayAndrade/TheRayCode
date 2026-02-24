<?php

interface Visitor
{
    public function visitFile(File $file);
    public function visitFolder(Folder $folder);
}