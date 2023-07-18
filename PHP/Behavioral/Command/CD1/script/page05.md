[home](./page01.md)

[back](./page04.md)

he Invoker is associated with one or several commands. 

It will send a request to the command. 

The Invoker does'nt depend on a concrete command or a receiver classes. The Invoker passes a request to a receiver indirectly, by executing it's command.

at the index

At the top we place our includes:

```
include_once ('Command.php');
include_once ('SimpleCommand.php');
include_once ('ComplexCommand.php');
include_once ('Receiver.php');
include_once ('Invoker.php');
```

The client code can parameterize the invoker with any of the commands.

```
$invoker = new Invoker;
$invoker->setOnStart(new SimpleCommand("Say Hi!"));
$receiver = new Receiver;
$invoker->setOnFinish(new ComplexCommand($receiver, "Send email", "Save report"));
$invoker->doSomethingImportant();
```

[page 6](./page06.md)
