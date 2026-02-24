[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

For the sake of simplicity, the *originator*'s state is stored inside a single variable.

The **Originator**'s business logic may affect its internal state.

Therefore, the client should backup the state before launching methods of the  business logic via the **save()** method.

The **save()** method Saves the current state inside a memento.

create *class*
```
Originator
```

add **1:6**
```
private $state;

```

add **2:6**

```
public function __construct(string $state)
{
    $this->state = $state;
    echo "Originator: My initial state is: {$this->state}<br/>";
}

```

add **3:6**

```
public function doSomething(): void
{
    echo "Originator: I'm doing something important.<br/>";
    $this->state = $this->generateRandomString(30);
    echo "Originator: and my state has changed to: {$this->state}<br/>";
}

```

add **4:6** **generateRandomString**

```
private function generateRandomString(int $length = 10): string
{
    return substr(
        str_shuffle(
            str_repeat(
                $x = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ',
                ceil($length / strlen($x))
            )
        ),
        1,
        $length
    );
}

```

add **5:6**
```
public function save(): Memento
{
    return new ConcreteMemento($this->state);
}

```


add **6:6**
```
public function restore(Memento $memento): void
{
    $this->state = $memento->getState();
    echo "Originator: My state has changed to: {$this->state}<br/>";
}
```

[page 4](./page04.md)
