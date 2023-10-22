<?php
require_once 'User.php';
require_once 'EmailChangeLogger.php';
require_once 'EmailChangeNotifier.php';

$user = new User("old.email@example.com");

$emailLogger = new EmailChangeLogger();
$emailNotifier = new EmailChangeNotifier();

$user->attach($emailLogger);
$user->attach($emailNotifier);

$user->changeEmail("new.email@example.com");