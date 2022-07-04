<?php
/**
 * https://www.youtube.com/watch?v=tfpZqhaM5kU
 * The Factory Design Pattern in PHP
 * life michael
 *
 */

include ('factory.php');
$obA = AnimalsFactory::getAnimal("dog");
$obB = AnimalsFactory::getAnimal("tiger");
echo $obA;
echo "<p>";
echo $obB;
?>