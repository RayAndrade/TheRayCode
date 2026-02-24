<?php
class RealSubject implements Subject
{

    public function request(): void
    {
        echo "RealSubject: Handling request.<br/>";
    }
}