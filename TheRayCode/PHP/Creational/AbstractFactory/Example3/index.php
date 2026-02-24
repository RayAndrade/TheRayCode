<?php

include 'MotifWidgetFactory.php';
include 'WindowsWidgetFactory.php';
include 'Client.php';

echo "Using Motif Theme:<hr/>\n";
$motifFactory = new MotifWidgetFactory();
$client1 = new Client($motifFactory);
$client1->renderUI();

echo "\nUsing Windows Theme:<hr/>\n";
$windowsFactory = new WindowsWidgetFactory();
$client2 = new Client($windowsFactory);
$client2->renderUI();