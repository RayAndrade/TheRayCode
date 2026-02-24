<?php

interface MailVisitor
{
    public function visitPerson(Person $person);
    public function visitBusiness(Business $business);
    public function visitInstitution(Institution $institution);
}