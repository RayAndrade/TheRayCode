[home](./page01.md)

[back](./page03.md)

Create the **class**
```
TreeFactory
```

with a
```
private static array $treeTypes = [];
```

and we add a **static function getTreeType** which retuns a **TreeType** object
```
public static function getTreeType(string $name, string $color, string $texture): TreeType
{
    $key = $name . $color . $texture;

    if (!isset(self::$treeTypes[$key])) {
        self::$treeTypes[$key] = new TreeType($name, $color, $texture);
    }
    return self::$treeTypes[$key];
}
```


if **isSet** we add new tree to the ArrayList

[page 5](./page05.md)
