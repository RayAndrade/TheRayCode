<?php
require_once 'UserFetcherInterface.php';
require_once 'UserFetcher.php';
class SecureUserFetcherProxy implements UserFetcherInterface
{
    private UserFetcher $fetcher;
    private string $secretToken;

    public function __construct(string $secretToken) {
        $this->fetcher = new UserFetcher();
        $this->secretToken = $secretToken;
    }
    public function fetchUser(): User
    {
        if ($this->secretToken !== "SecretToken123") {
            throw new Exception("Invalid token; access denied!");
        }
        return $this->fetcher->fetchUser();
    }
}