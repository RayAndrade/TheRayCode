<?php

abstract class Expression
{
    public abstract function interpret(array $context);
}