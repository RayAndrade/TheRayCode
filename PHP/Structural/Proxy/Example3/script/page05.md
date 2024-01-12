[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

### Step 3: Create the Proxy Class
This class will have a reference to the RealSubject and will instantiate it only when required.

**Proxy.php**
create class
```
Proxy
```
include
```
include_once 'Subject.php';
include_once 'RealSubject.php';
```
so we can
```
 implements Subject
```
generate code and add
```
private ?RealSubject $realSubject = null;
```
and to **request** we add
```
if ($this->realSubject === null) {
    $this->realSubject = new RealSubject();
}
return $this->realSubject->request();
```


 
[page 6](./page06.md)
