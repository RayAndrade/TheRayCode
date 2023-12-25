<?php

// The component interface declares common operations for both simple and
// complex objects of a composition.
interface FileComponent
{
    public function getSize();
    public function getName();
}