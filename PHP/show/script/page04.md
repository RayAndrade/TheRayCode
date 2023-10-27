[home](./page01.md)

[back](./page03.md)

The Receiver classes contain some important business logic. 
They know how to perform all kinds of operations, associated with carrying out a request. 
In fact, any class may serve as a Receiver.

class

```
Receiver
```

with code

```
public function doSomething(string $a): void
{
    echo "Receiver: Working on (" . $a . ".)<br/>";
}

public function doSomethingElse(string $b): void
{
    echo "Receiver: Also working on (" . $b . ".)<br/>";
}
```

[page 5](./page05.md)
