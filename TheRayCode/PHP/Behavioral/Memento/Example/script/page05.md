[home](./page01.md) | [back](./page04.md) | [next](./page06.md)


The Caretaker doesn't depend on the Concrete Memento class. 

Therefore, it doesn't have access to the originator's state, stored inside the memento. 

It works with all mementos via the base Memento interface.

create *class*
```
Caretaker
```

add code

```
private $mementos = [];
private $originator;

public function __construct(Originator $originator)
{
    $this->originator = $originator;
}

public function backup(): void
{
    echo "\nCaretaker: Saving Originator's state...<br/>";
    $this->mementos[] = $this->originator->save();
}

public function undo(): void
{
    if (!count($this->mementos)) {
        return;
    }
    $memento = array_pop($this->mementos);
    echo "Caretaker: Restoring state to: " . $memento->getName() . "<br/>";
    try {
        $this->originator->restore($memento);
    } catch (\Exception $e) {
        $this->undo();
    }
}

public function showHistory(): void
{
    echo "Caretaker: Here's the list of mementos:<br/>";
    foreach ($this->mementos as $memento) {
        echo $memento->getName() . "<br/>";
    }
}
```



[page 6](./page06.md)
