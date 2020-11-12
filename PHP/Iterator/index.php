<?php

include_once ('AlphabeticalOrderIterator.php');
include_once ('WordsCollection.php');

$collection = new WordsCollection;
$collection->addItem("A");
$collection->addItem("B");
$collection->addItem("C");

echo "Straight traversal:<br/>";
foreach ($collection->getIterator() as $item) {
    echo $item . "<br/>";
}

echo "<br/>";
echo "Reverse traversal:<br/>";
foreach ($collection->getReverseIterator() as $item) {
    echo $item . "<br/>";
}

