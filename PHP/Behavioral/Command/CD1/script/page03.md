[home](./page01.md)

[back](./page02.md)


Let's create a Complex Command. 

Now, some commands can delegate more complex operations to other objects. 

Those objects are called receivers. Some Context data will be required for launching the receiver's methods. 

Some Complex commands can accept one or more receiver objects along with any context data from the constructor.

The Commands can delegate to any method of a receiver.

class
```
ComplexCommand
```

```
 implements Command
```

```
private $receiver;
private $a;
private $b;
```

add

```
public function __construct(Receiver $receiver, string $a, string $b)
{  }
```

add code

```
$this->receiver = $receiver;
$this->a = $a;
$this->b = $b;
```

and we add

```
public function execute(): void
{  }
```


with

```
echo "ComplexCommand: Complex stuff should be done by a receiver object.<br/>";
$this->receiver->doSomething($this->a);
$this->receiver->doSomethingElse($this->b);
```



[page 4](./page04.md)
