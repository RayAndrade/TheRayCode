We start with the *class* **Adaptee**.

The Adaptee will contain some useful behavior, **BUT** its interface is incompatible  with the existing client code. 
The **Adaptee** will need some adaptation before the client code can use it.

```php
class Adaptee
{
    public function specificRequest(): string
    {
        return "!!!EMOSEWA si edoC yaR ehT";
    }
}
```

As is noted we are unable to read the message provided.

Fist we create the **Target** *class*.

```php
class Target
{
    public function request(): string
    {
        return "Target: The default target's behavior.";
    }
}
```

And we create an **Adapter** to deal with this message.
The key is to use **strrev**.

```php
include_once ("Target.php");

class Adapter extends Target
{
    private $adaptee;

    public function __construct(Adaptee $adaptee)
    {
        $this->adaptee = $adaptee;
    }

    public function request(): string
    {
        return "Adapter: (TRANSLATED): " . strrev($this->adaptee->specificRequest());
    }
}
```

The Adapter makes the Adaptee's interface compatible with the Target's interface.


Let's put this all together in the index file.


Now for our demo. 
We start with the files we want to inclued

```php
include_once ("Adaptee.php");
include_once ("Adapter.php");
```

First we create some client code. The client code supports all classes that follow the Target interface.

```php

function clientCode(Target $target)
{
    echo $target->request();
}

```

Note that **Target.php** is decleared in **Adapter**.

Now for our **DEMO**.

```php

echo "Client: I can work just fine with the Target objects:<br/>";
$target = new Target();
clientCode($target);
echo "<br/><br/>";

$adaptee = new Adaptee();
echo "Client: The Adaptee class has a weird interface. See, I don't understand it:<br/>";
echo "Adaptee: " . $adaptee->specificRequest();
echo "<br/><br/>";

echo "Client: But I can work with it via the Adapter:<br/>";
$adapter = new Adapter($adaptee);
clientCode($adapter);

```

When we view the result in a browser we see:

```run
Client: I can work just fine with the Target objects:
Target: The default target's behavior.

Client: The Adaptee class has a weird interface. See, I don't understand it:
Adaptee: !!!EMOSEWA si edoC yaR ehT

Client: But I can work with it via the Adapter:
Adapter: (TRANSLATED) : The Ray Code is AWESOME!!!
```

