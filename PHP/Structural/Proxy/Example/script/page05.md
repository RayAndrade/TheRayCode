[home](./page01.md)

[back](./page04.md)

$`\textcolor{red}{\text{**1**}}`$ 
```
private $realSubject;
```

The Proxy maintains a reference to an object of the RealSubject class. 

It can be either lazy-loaded or passed to the Proxy by the client.
$`\textcolor{red}{\text{**2**}}`$ 
```
public function __construct(RealSubject $realSubject)
{
    $this->realSubject = $realSubject;
}
```


The most common applications of the Proxy pattern are lazy loading, caching, controlling the access, logging, etc. 

A Proxy can perform one of these things and then, depending on the result, pass the execution to the same method in a linked RealSubject object.

**In the request method**
$`\textcolor{red}{\text{**3**}}`$ 
```
if ($this->checkAccess()) {
    $this->realSubject->request();
    $this->logAccess();
}
```

add the **checkAccess** the **bool**
$`\textcolor{red}{\text{**4**}}`$ 
```
private function checkAccess(): bool
{
    // Some real checks should go here.
    echo "Proxy: Checking access prior to firing a real request.<br/>";
    return true;
}
```


And **log** the action
$`\textcolor{red}{\text{**5**}}`$ 
```
private function logAccess(): void
{
    echo "Proxy: Logging the time of request.<br/>";
}
```

[page 6](./page06.md)
