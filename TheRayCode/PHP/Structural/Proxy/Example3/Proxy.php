<?php
include_once 'Subject.php';
include_once 'RealSubject.php';
class Proxy implements Subject
{
    private ?RealSubject $realSubject = null;
    public function request(): string
    {
        if ($this->realSubject === null) {
            $this->realSubject = new RealSubject();
        }
        return $this->realSubject->request();
    }
}