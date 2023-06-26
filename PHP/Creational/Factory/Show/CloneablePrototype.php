<?php

namespace TheRayCode\Prototype;

interface CloneablePrototype
{
    public function clone(): CloneablePrototype;
}