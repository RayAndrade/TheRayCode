[home](./page01.md) [back](./page03.md) | [next](./page05.md)

Create **class**
```
Proxy
```
which 
```
 implements Subject
```
add the **required** **request** method and for code

```
if ($this->checkAccess()) {
    $this->realSubject->request();
    $this->logAccess();
}
```





[page 5](./page05.md)
