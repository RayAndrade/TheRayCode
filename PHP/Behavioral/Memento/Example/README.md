[up](../README.md)

The Memento interface provides a way to retrieve the memento's metadata, suchas creation date or name. However, it doesn't expose the Originator's state.

```php
interface Memento
{
    public function getName(): string;

    public function getDate(): string;
}
```

The Originator holds some important state that may change over time. 
It also defines a method for saving the state inside a memento and another method for restoring the state from it.

For the sake of simplicity, the originator's state is stored inside a single variable.
The Originator's business logic may affect its internal state. 
Therefore, the client should backup the state before launching methods of the  business logic via the **save()** method.
The **save()** method Saves the current state inside a memento.

The **restore(Memento $memento)** Restores the Originator's state from a memento object.
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

![Mediator](/UMLs/images/Mediator/Mediator-4.png)

The Concrete Memento contains the infrastructure for storing the Originator's state.

The Originator uses this method when restoring its state.

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

The Caretaker doesn't depend on the Concrete Memento class. 
Therefore, it doesn't have access to the originator's state, stored inside the memento. 
It works with all mementos via the base Memento interface.

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

Let's go to the index.php files and to the the to we add our includes/

```php
include_once ('Originator.php');
include_once ('Memento.php');
include_once ('ConcreteMemento.php');
include_once ('Caretaker.php');
```
Client code.
```php
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

Now let's view this thru a browser.
We should have:

```run
Client triggers operation A.
Component A does A.
Mediator reacts on A and triggers following operations:
Component A does C.

Client triggers operation B.
Component B does D.
Mediator reacts on D and triggers following operations:
Component B does B.
Component A does C.
```

[Wikipedia](https://en.wikipedia.org/wiki/Memento_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
