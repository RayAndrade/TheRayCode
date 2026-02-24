<?php
//namespace TheRayCode\Prototype;

include 'Clown.php';
include 'Phrase.php';

$bozoClown = new Clown("Bozo", new Phrase("Merry Christmas"));

$bozoShallowClone = clone $bozoClown;
$KrampusKlown = $bozoClown->deepClone();

// Let's change the Prase of ORIGINAL bozoClown
$bozoClown->chatchPrase->phrase = "WHOA NELLY";

echo "Original Bozo Clown chatch Prase: " . $bozoClown->chatchPrase->phrase . "<br/>\n"; // WHOA NELLY

echo "Shallow Bozo Clone phrase: " . $bozoShallowClone->chatchPrase->phrase . "<br/>\n"; // WHOA NELLY
echo "Deep Krampus Clone phase: " . $KrampusKlown->chatchPrase->phrase . "<br/>\n"; // Merry Christmas