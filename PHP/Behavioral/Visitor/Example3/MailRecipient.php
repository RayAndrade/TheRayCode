<?php

interface MailRecipient
{
    public function accept(MailVisitor $visitor);
}