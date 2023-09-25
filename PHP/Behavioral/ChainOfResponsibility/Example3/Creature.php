<?php

interface Creature
{
    public function setNext(Creature $creature);
    public function swallow();
}