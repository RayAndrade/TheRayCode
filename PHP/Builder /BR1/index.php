<?php
namespace TheRayCode\Builder;

include_once ('Builder.php');
include_once('RealBuilder.php');;
include_once('Product.php');
include_once ('Director.php');

echo "The Ray Code is AWESOME!!!<br/><br/>";

function clientCode(Director $director)
{
    $builder = new RealBuilder;
    $director->setBuilder($builder);

    echo "Standard basic product:<br/>";
    $director->buildMinimalViableProduct();
    $builder->getProduct()->listParts();

    echo "Standard full featured product:<br/>";
    $director->buildFullFeaturedProduct();
    $builder->getProduct()->listParts();

    echo "Custom product:<br/>";
    $builder->producePartA();
    $builder->producePartC();
    $builder->getProduct()->listParts();
}

$director = new Director;
clientCode($director);
echo "end<br/>";
