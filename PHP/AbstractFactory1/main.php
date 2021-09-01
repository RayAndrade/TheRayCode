<?php
include "factories.php";
//setting the factory
$factory = new WoodToysFactory();
echo "<br>".$factory->getEducationGame();
echo "<br>".$factory->getPuzzleGame();
echo "<br>".$factory->getSocialGame();
//
$factory = new SteelToysFactory();
echo "<br>".$factory->getEducationGame();
echo "<br>".$factory->getPuzzleGame();
echo "<br>".$factory->getSportiveGame();