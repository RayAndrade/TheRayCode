<?php
require_once 'Subject.php';
require_once 'Observer.php';
class User implements Subject
{
    private string $email;
    private array $observers = [];
    public function __construct(string $email)
    {
        $this->email = $email;
    }
    public function attach(Observer $observer): void
    {
        $this->observers[] = $observer;
    }

    public function detach(Observer $observer): void
    {
        foreach ($this->observers as $key => $obs) {
            if ($obs === $observer) {
                unset($this->observers[$key]);
                break;
            }
        }
    }

    public function notify(): void
    {
        foreach ($this->observers as $observer) {
            $observer->update($this);
        }
    }
    public function changeEmail(string $email): void
    {
        $this->email = $email;
        $this->notify();
    }

    public function getEmail(): string
    {
        return $this->email;
    }
}