<?php
include_once 'MailRecipient.php';
class Person implements MailRecipient
{
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }
    public function accept(MailVisitor $visitor)
    {
        $visitor->visitPerson($this);
    }
}