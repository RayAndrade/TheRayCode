[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Let's go to the index.php files and to the the to we add our includes

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



[page 7](./page07.md)
