[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

create the Proxy **class** 
```
Proxy
```
and have it implements Subject and add code to request function:
```
 implements Subject
```
at the top we add:
```
private $realSubject;
```
The Proxy maintains a reference to an object of the RealSubject class. 

It can be either lazy-loaded or passed to the Proxy by the client.
```
public function __construct(RealSubject $realSubject)
{
    $this->realSubject = $realSubject;
}
```
The most common applications of the Proxy pattern are lazy loading, caching, controlling the access, logging, etc. 
 
A Proxy can perform one of  these things and then, depending on the result, pass the execution to the same method in a linked RealSubject object.

For the **request** function we add
```
if ($this->checkAccess()) {
    $this->realSubject->request();
    $this->logAccess();
 }
```

So let's add these functions:
```
private function checkAccess(): bool
{
        // Some real checks should go here.
    echo "Proxy: Checking access prior to firing a real request.<br/>";
    return true;
}
```
And we should log the acess
```
private function logAccess(): void
{
    echo "Proxy: Logging the time of request.<br/>";
}
```


[page 4](./page04.md)
