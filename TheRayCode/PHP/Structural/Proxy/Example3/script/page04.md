[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

### Step 2: Create the RealSubject Class
This is the actual **class** that performs the core operations. In our case, it simulates an "expensive" operation.

**RealSubject.php**
```
RealSubject
```
Let's
```
 include_once 'Subject.php';
```
so we can
```
 implements Subject 
```
add code to Simulate an expensive creation operation we use **sleep**
```
public function __construct() {
        // Simulate an expensive creation operation
    sleep(2);  // Delay for 2 seconds
}
```
in **request** we add:
```
return "RealSubject: Handling request.";
```


[page 5](./page05.md)
