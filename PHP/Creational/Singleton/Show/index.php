<?php

require_once 'Singleton.php';

use TheRayCode\Singleton\Singleton;

$singleton1 = Singleton::getInstance();
$singleton2 = Singleton::getInstance();

if ($singleton1 === $singleton2) {
    echo "Both variables contain the same instance.";
} else {
    echo "Variables contain different instances.";
}
