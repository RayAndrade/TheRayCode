<?php
class AnimalsFactory{
    /**
     * @throws Exception
     */
    public static function  getAnimal($str)
    {
        if ($str == "cat") {
            return new Cat();
        } else if ($str == "tiger") {
            $ob = new Cat();
            $ob->setCatType("tiger");
            return $ob;
        } else if ($str == "dog") {
            return new Dog();
        }
        throw new Exception('animal type does not exist');

    }
}

class Cat
{
    private $catType;
    function __toString()
    {
        return "cat and type is " . $this->catType;
    }
    function setCatType($str)
    {
        $this->catType = $str;
    }
}
class Dog
{
    function __toString()
    {
        return "dog";
    }
}