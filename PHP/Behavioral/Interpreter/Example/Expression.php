<?php

interface Expression
{
    public function interpret($context);
}