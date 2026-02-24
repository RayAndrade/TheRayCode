<?php
require_once 'Observer.php';
require_once 'User.php';
class EmailChangeLogger implements Observer
{

    public function update(Subject $subject): void
    {
        if ($subject instanceof User) {
            echo "EmailChangeLogger: The user's email has been changed to: " . $subject->getEmail() . "<br>";
        }
    }
}