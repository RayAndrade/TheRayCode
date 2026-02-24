<?php
include_once 'MailRecipient.php';
class Institution implements MailRecipient
{
    private $institutionName;

    public function __construct($institutionName) {
        $this->institutionName = $institutionName;
    }

    public function getInstitutionName() {
        return $this->institutionName;
    }
    public function accept(MailVisitor $visitor)
    {
        $visitor->visitInstitution($this);
    }
}