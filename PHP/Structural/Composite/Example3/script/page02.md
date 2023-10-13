[home](./page01.md)

[back](./page01.md)

**Light.php**

class
```
Light
```

add code

**1:3**
```
private string $color;
```
**2:3**
```
public function addLight($light): void {
    $this->lights[] = $light;
}
```

**3:3**
```
public function shine(): string {
    $output = '';
    foreach ($this->lights as $light) {
        $output .= $light->shine();
    }
    return $output;
}
```

Explanation:
    **addLight($light)**: Method to add an individual Light or another LightString to the current string.
    **shine()**: Iterates over all Light and LightString objects and calls their shine() method, concatenating the result.


[page 3](./page03.md)
