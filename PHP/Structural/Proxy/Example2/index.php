<?php
require_once 'SecureUserFetcherProxy.php';

try {
    $secretToken = "SecretToken123"; // Try changing this to an incorrect token to test the security.
    $proxy = new SecureUserFetcherProxy($secretToken);
    $user = $proxy->fetchUser();
    echo "User fetched: " . $user->getName();
} catch (Exception $e) {
    echo $e->getMessage(); // In a real application, you might want to handle exceptions differently.
}
