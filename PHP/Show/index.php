<?php
namespace TheRayCode\ChainOfResponsibility;
include_once ('Handler.php');
include_once ('AbstractHandler.php');

include_once ('MonkeyHandler.php');
include_once ('SquirrelHandler.php');
include_once ('DogHandler.php');



function clientCode(Handler $handler)
{
    foreach (["Nut", "Banana", "Cup of coffee"] as $food) {
        echo "Client: Who wants a " . $food . "?\n";
        $result = $handler->handle($food);
        if ($result) {
            echo "  " . $result;
        } else {
            echo "  " . $food . " was left untouched.<br/>";
        }
    }
}


$monkey = new MonkeyHandler;
$squirrel = new SquirrelHandler;
$dog = new DogHandler;

$monkey->setNext($squirrel)->setNext($dog);

echo "Chain: Monkey > Squirrel > Dog<br/><br/>";
clientCode($monkey);
echo "\n";

echo "Subchain: Squirrel > Dog<br/><br/>";
clientCode($squirrel);


echo "The Ray Code is AWESOME!!!<br/><br/>";

