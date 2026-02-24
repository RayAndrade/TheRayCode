<?php
include_once 'Person.php';
include_once 'Business.php';
include_once 'Institution.php';
include_once 'LabelPrinterVisitor.php';

$john = new Person('John Doe');
$techCorp = new Business('TechCorp Ltd.');
$uni = new Institution('University of Knowledge');

$labelPrinter = new LabelPrinterVisitor();

$john->accept($labelPrinter);
$techCorp->accept($labelPrinter);
$uni->accept($labelPrinter);