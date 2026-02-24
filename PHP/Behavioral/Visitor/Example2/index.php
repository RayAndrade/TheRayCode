<?php
include_once 'File.php';
include_once 'Folder.php';
include_once 'DisplayVisitor.php';

$root = new Folder('Root');
$document = new Folder('Documents');
$img = new File('image.jpg');
$doc = new File('document.docx');

$document->addElement($img);
$document->addElement($doc);
$root->addElement($document);

$visitor = new DisplayVisitor();
$root->accept($visitor);