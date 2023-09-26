[home](./page01.md)

[back](./page01.md)

Some commands can be implement with simple operations on their own. 

First, we will add a Simple Command that will implement the Command interface.

class

```
SimpleCommand
```

```
implements Command
```

add code

```
private $payload;
```
and 

```
public function __construct(string $payload)
{
    $this->payload = $payload;
}
```

and
```
public function execute(): void
{
    echo "SimpleCommand: does the request  (" . $this->payload . ")<br/>";
}
```

[page 3](./page03.md)
