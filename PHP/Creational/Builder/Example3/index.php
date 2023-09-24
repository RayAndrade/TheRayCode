<?php

include 'JetAirplaneBuilder.php';

// Building an airplane using the Builder pattern
$airplaneBuilder = new JetAirplaneBuilder();
$airplaneBuilder->buildWings();
$airplaneBuilder->buildEngine();
$airplaneBuilder->buildCockpit();

$airplane = $airplaneBuilder->getAirplane();
echo $airplane->showSpecifications();
