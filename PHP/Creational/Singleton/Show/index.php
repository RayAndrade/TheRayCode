<?php

namespace TheRayCode\Singleton;
// Testing the Singleton pattern

include 'Singleton.php';

// Get the singleton instance
$instance1 = Singleton::getInstance();

// Call a method on the first instance
$instance1->showMessage(); // Output: Hello, I am the Singleton instance!

// Try to create a new instance
//$instance2 = new Singleton(); // This will produce an error

// Create a new variable pointing to the same instance
$instance3 = Singleton::getInstance();

// Call a method on the second instance
$instance3->showMessage(); // Output: Hello, I am the Singleton instance!