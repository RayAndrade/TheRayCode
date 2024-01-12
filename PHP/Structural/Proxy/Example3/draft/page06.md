[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

### Step 4: Create the index.php for Demonstration

**index.php**

```
include_once 'Proxy.php';
```
// The client code may or may not know about the RealSubject's existence.
// In this case, we're just interacting through the proxy.
```
$proxy = new Proxy();

echo $proxy->request();
```


[page 7](./page07.md)
