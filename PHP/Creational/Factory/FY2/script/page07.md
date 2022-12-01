[back](./page06.md)

We are now ready to put this all together in the Demo.php for our demonstration.

We make sure we have all the includes:

We start with our includes:

```php
include_once ('Creator.php');
include_once('Creator1.php');
include_once('Creator2.php');
include_once ('Product.php');
include_once('Product1.php');
include_once('Product2.php');
```

We add some client code

```php

function clientCode(Creator $creator)
{
   echo "Client: I'm not aware of the creator's class, but it still works.<br/>"
        . $creator->someOperation();
}

```

and for our demo

```php

echo "App: Launched with the Creator1.<br/>";
clientCode(new Creator1);
echo "<br/><br/>";

echo "App: Launched with the Creator2.<br/>";
clientCode(new Creator2);


```

[page 8](./page08.md)
