[home](./page01.md)

[back](./page05.md)

At the **index.php**

```
include_once ('Subject.php');
include_once ('RealSubject.php');
include_once ('Proxy.php');
```

Add a function for **clientCode**

```
function clientCode(Subject $subject)
{
    // ...
    $subject->request();
    // ...
}
```
**Executing the client code with a real subjec**
```
echo "Client: Executing the client code with a real subject:<br/>";
$realSubject = new RealSubject;
clientCode($realSubject);
```

to seperate
```
echo "<br/>";
```

and
**Client: Executing the same client code with a proxy**
```
echo "Client: Executing the same client code with a proxy:<br/>";
$proxy = new Proxy($realSubject);
clientCode($proxy);
```


[page 7](./page07.md)
