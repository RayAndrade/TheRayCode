<?php
// TerminalExpression.php

require_once 'AbstractExpression.php';

class TerminalExpression implements AbstractExpression
{
    private $data;

    public function __construct($data)
    {
        $this->data = $data; // Store the literal value
    }

    public function interpret($context)
    {
        // Return true if context contains the literal value
        return strpos($context, $this->data) !== false;
    }
}
