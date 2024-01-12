[home](./page01.md)  | [back](./page04.md) | [next](./page06.md)

Create **class**
```
SecureUserFetcherProxy
```
which
```
 implements UserFetcherInterface
```
so we shoud **AT THE TOP**
```
require_once 'UserFetcherInterface.php';
require_once 'UserFetcher.php';
```
then generate required method and add code:
```
private string $secretToken;
```
and...
```
public function __construct(string $secretToken) {
    $this->fetcher = new UserFetcher();
    $this->secretToken = $secretToken;
}
```
and for **fetchUser**
```
if ($this->secretToken !== "SecretToken123") {
    throw new Exception("Invalid token; access denied!");
}
return $this->fetcher->fetchUser();
```




[next](./page06.md)
