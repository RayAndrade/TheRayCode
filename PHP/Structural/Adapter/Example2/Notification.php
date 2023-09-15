<?php

namespace TheRayCode\Adapter;

interface Notification
{
    public function send(string $title, string $message);
}