<?php
namespace TheRayCode\ChainOfResponsibility;
include_once ('Handler.php');
include_once ('AbstractHandler.php');

include_once('CatHandler.php');
include_once('MouseHandler.php');
include_once ('DogHandler.php');



function clientCode(Handler $handler)
{
    foreach (["Catnip", "Bone", "Cup of coffee"] as $food) {
        echo "Client: Who wants a " . $food . "?<br/>";
        $result = $handler->handle($food);
        if ($result) {
            echo "  " . $result;
        } else {
            echo "  " . $food . " was left untouched.<br/>";
        }
    }
}


$cat = new CatHandler;
$mouse = new MouseHandler;
$dog = new DogHandler;

$cat->setNext($mouse)->setNext($dog);

echo "Chain: Mouse > Cat > Dog<br/>";
clientCode($cat);
echo "<br/>";

echo "Subchain: Mouse > Dog<br/>";
clientCode($mouse);


