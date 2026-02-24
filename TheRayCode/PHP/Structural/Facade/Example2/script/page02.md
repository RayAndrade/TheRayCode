[home](./page01.md)

[back](./page01.md)

**class Facade.php**

```
Facade
```

add code
```
public static function decorateText($text, $decorators) {
    foreach ($decorators as $decorator) {
        $text = $decorator->decorate($text);
    }
    return $text;
}
```
This class will act as a facade and provide a simplified interface for decorating 


[page 3](./page03.md)
