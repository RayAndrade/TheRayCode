<?php
require_once 'User.php';
require_once 'UserFetcherInterface.php';
class UserFetcher implements UserFetcherInterface
{

    public function fetchUser(): User
    {
        // Here you would have your logic to fetch the user data, e.g., from a database.
        // We're returning a static user for simplicity.
        return new User("John Doe");
    }
}