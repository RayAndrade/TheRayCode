<?php
require_once 'Observer.php';
require_once 'User.php';
class EmailChangeNotifier implements Observer
{

    public function update(Subject $subject): void
    {
        if ($subject instanceof User) {
            // In a real application, you might send an email here. For demo purposes, we'll just print a message.
            echo "EmailChangeNotifier: An email has been sent to the user notifying them of their email change to: " . $subject->getEmail() . "<br>";
        }
    }
}