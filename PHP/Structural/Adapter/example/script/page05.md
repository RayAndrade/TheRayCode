[home](./page01.md)

[back](./page04.md)

Let's put this altogether in **index**

```
require_once 'Target.php';
require_once 'Adaptee.php';
require_once 'Adapter.php';
```

The client code can work with any class that follows the Target interface
```
function clientCode(Target $target)
{
    echo $target->request();
}
```

our demo

```
echo "Client code with Adaptee:\n";
$adaptee = new Adaptee();
echo $adaptee->specificRequest();
echo "\n\n";

echo "Client code with Adapter:\n";
$adapter = new Adapter($adaptee);
clientCode($adapter);
```



[page 6](./page06.md)
