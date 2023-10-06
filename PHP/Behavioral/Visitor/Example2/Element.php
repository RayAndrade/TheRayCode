<?php

interface Element
{
    public function accept(Visitor $visitor);
}