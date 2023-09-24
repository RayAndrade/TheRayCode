<?php

interface ChatRoomMediator
{
    public function showMessage(User $user, string $message): void;
}