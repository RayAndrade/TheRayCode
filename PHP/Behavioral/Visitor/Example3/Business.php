<?php

class Business implements MailRecipient
{
    private $businessName;

    public function __construct($businessName) {
        $this->businessName = $businessName;
    }

    public function getBusinessName() {
        return $this->businessName;
    }
    public function accept(MailVisitor $visitor)
    {
        $visitor->visitBusiness($this);
    }
}