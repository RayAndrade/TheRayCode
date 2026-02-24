<?php

include_once 'Expression.php';
class Subtract extends Expression
{
    private $leftExpression;
    private $rightExpression;

    public function __construct(Expression $left, Expression $right) {
        $this->leftExpression = $left;
        $this->rightExpression = $right;
    }


    public function interpret(array $context)
    {
        return $this->leftExpression->interpret($context) - $this->rightExpression->interpret($context);
    }
}