<?php

namespace TheRayCode\DesignPatterns\Memento;

/**
 * The Memento interface provides a way to retrieve the memento's metadata, such
 * as creation date or name. However, it doesn't expose the Originator's state.
 */


interface Memento
{
    public function getName(): string;

    public function getDate(): string;
}