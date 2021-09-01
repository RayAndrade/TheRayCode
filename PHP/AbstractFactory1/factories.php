<?php
include "products.php";

abstract class AbstractToysFactory
{
    private $material;
    public function setMaterial($str)
    {
        $this->material = $str;
    }
    public abstract function getDollGame();
    public abstract function getPuzzleGame();

}
class WoodToysFactory extends AbstractToysFactory
{
    public function getDollGame()
    {
        return new WoodDollGame();
    }

    public function getPuzzleGame()
    {
        return new WoodPuzzleGame();
    }
}

class SteelToysFactory  extends AbstractToysFactory
{
    public function getDollGame()
    {
        return new SteelDollGame();
    }

    public function getPuzzleGame()
    {
        return new SteelPuzzleGame();
    }
}
?>