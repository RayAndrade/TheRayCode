<?php
include_once 'Subject.php';
class RealSubject implements Subject
{
    public function __construct() {
        // Simulate an expensive creation operation
        sleep(2);  // Delay for 2 seconds
    }
    public function request(): string
    {
        return "RealSubject: Handling request.";
    }
}