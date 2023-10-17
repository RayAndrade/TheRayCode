[home](./page01.md)

[back](./page04.md)

```
include_once ('Facade.php');
include_once ('SubsystemA.php');
include_once ('SubsystemB.php');
```

The client code may have some of the subsystem's objects already created. In this case, it might be worthwhile to initialize the Facade with these objects instead of letting the Facade create new instances.

add:

```
function clientCode(Facade $facade)
{
  echo $facade->operation();
}
```

and to demo our code:

```
$subsystemA = new SubsystemA;
$subsystemB = new SubsystemB;
$facade = new Facade($subsystemA, $subsystemB);
clientCode($facade);
```



[page 6](./page06.md)
