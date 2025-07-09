<?php
// OrExpression.php

require_once 'AbstractExpression.php';

class OrExpression implements AbstractExpression
{
    private $expr1;
    private $expr2;

    public function __construct(AbstractExpression $expr1, AbstractExpression $expr2)
    {
        $this->expr1 = $expr1;
        $this->expr2 = $expr2;
    }

    public function interpret($context)
    {
        return $this->expr1->interpret($context) || $this->expr2->interpret($context);
    }
}
