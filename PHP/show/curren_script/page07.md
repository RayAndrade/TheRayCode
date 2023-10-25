[home](./page01.md)

[back](./page06.md)

Now let's put this all together in the **index.php** file.

We start with the includes:

```
include_once ('Abstraction.php');
include_once ('ExtendedAbstraction.php');
include_once ('Implementation.php');
include_once ('ConcreteImplementationA.php');
include_once ('ConcreteImplementationB.php');
```

Except for the initialization phase, where an Abstraction object gets linked with a specific Implementation object, the client code should only depend on the Abstraction class. 

This way the client code can support any abstraction implementation combination.

```
function clientCode(Abstraction $abstraction)
{
    // ...
    echo $abstraction->operation();
    // ...
}
```

The client code should be able to work with any pre-configured abstraction implementation combination.

```
$implementation = new ConcreteImplementationA;
$abstraction = new Abstraction($implementation);
clientCode($abstraction);

echo "<br/>";

$implementation = new ConcreteImplementationB;
$abstraction = new ExtendedAbstraction($implementation);
clientCode($abstraction);
```


[page 8](./page08.md)
