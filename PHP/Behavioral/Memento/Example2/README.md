**Memento.php**

```php
interface Memento
{
    public function getName(): string;
    public function getDate(): string;
}
```

**Caretaker.php**

```php
class Caretaker
{
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
}
```

**ConcreteMemento.php**

```php
class ConcreteMemento implements Memento
{
    private $state;

    private $date;

    public function __construct(string $state)
    {
        $this->state = $state;
        $this->date = date('Y-m-d H:i:s');
    }
    public function getState(): string
    {
        return $this->state;
    }

    /**
     * The rest of the methods are used by the Caretaker to display metadata.
     */
    public function getName(): string
    {
        return $this->date . " / (" . substr($this->state, 0, 9) . "...)";
    }

    public function getDate(): string
    {
        return $this->date;
    }
}
```

**Originator.php**

```php
class Originator
{
    private $state;
    public function __construct(string $state)
    {
        $this->state = $state;
        echo "Originator: My initial state is: {$this->state}<br/>";
    }
    public function doSomething(): void
    {
        echo "Originator: I'm doing something important.<br/>";
        $this->state = $this->generateRandomString(30);
        echo "Originator: and my state has changed to: {$this->state}<br/>";
    }

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

    public function save(): Memento
    {
        return new ConcreteMemento($this->state);
    }
    public function restore(Memento $memento): void
    {
        $this->state = $memento->getState();
        echo "Originator: My state has changed to: {$this->state}<br/>";
    }
}
```

**index.php**

```php

include_once ('Originator.php');
include_once ('Memento.php');
include_once ('ConcreteMemento.php');
include_once ('Caretaker.php');
//Client code.

$originator = new Originator("Super-duper-super-puper-super.");
$caretaker = new Caretaker($originator);

$caretaker->backup();
$originator->doSomething();

$caretaker->backup();
$originator->doSomething();

$caretaker->backup();
$originator->doSomething();

echo "\n";
$caretaker->showHistory();

echo "\nClient: Now, let's rollback!<br/><br/>";
$caretaker->undo();

echo "\nClient: Once more!<br/><br/>";
$caretaker->undo();
```

