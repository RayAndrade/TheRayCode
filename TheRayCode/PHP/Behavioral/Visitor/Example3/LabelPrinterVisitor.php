<?php
include_once 'MailVisitor.php';
class LabelPrinterVisitor implements MailVisitor
{

    public function visitPerson(Person $person)
    {
        echo "Label for Person: " . $person->getName() . "<br>";
    }

    public function visitBusiness(Business $business)
    {
        echo "Label for Business: " . $business->getBusinessName() . "<br>";
    }

    public function visitInstitution(Institution $institution)
    {
        echo "Label for Institution: " . $institution->getInstitutionName() . "<br>";
    }
}