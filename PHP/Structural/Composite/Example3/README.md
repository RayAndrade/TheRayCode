[up](../README.md)

### Overview

In the Structural Composite design pattern, individual objects and composites of objects are treated uniformly. In a typical design, it enables a client to interact with individual objects and compositions of objects uniformly. 

In our context with a Christmas theme, let's consider:
- `Light`: Represents an individual light.
- `LightString`: Represents a string of lights, which can consist of both individual `Light` objects and other `LightString` objects.

### 1. `Light.php`
This class represents an individual light in the Christmas tree.

```php
<?php
// Light.php

class Light {
    private string $color;

    public function __construct

	(string $color) {
        $this->color = $color;
    }

    public function shine(): string {
        return "<span style='color:{$this->color};'>*</span>";
    }
}
```

### Explanation:
- `__construct($color)`: Constructor takes a color as a parameter to set the light color.
- `shine()`: Returns a colored asterisk as an HTML span element to symbolize a shining light.

### 2. `LightString.php`
This class represents a string of lights, which can include other strings of lights.

```php
<?php
// LightString.php

include_once 'Light.php';

class LightString {
    private array $lights = [];

    public function addLight($light): void {
        $this->lights[] = $light;
    }

    public function shine(): string {
        $output = '';
        foreach ($this->lights as $light) {
            $output .= $light->shine();
        }
        return $output;
    }
}
```
### Explanation:
- `addLight($light)`: Method to add an individual `Light` or another `LightString` to the current string.
- `shine()`: Iterates over all `Light` and `LightString` objects and calls their `shine()` method, concatenating the result.

### 3. `index.php`
This is the file that demonstrates how the Composite Pattern can be used to treat individual `Light` objects and `LightString` composites uniformly.

```php
<?php
// index.php

include_once 'Light.php';
include_once 'LightString.php';

$redLight = new Light('red');
$greenLight = new Light('green');
$blueLight = new Light('blue');

$firstString = new LightString();
$firstString->addLight($redLight);
$firstString->addLight($greenLight);

$secondString = new LightString();
$secondString->addLight($blueLight);
$secondString->addLight($firstString); // Demonstrating composition by adding firstString into secondString

echo "Christmas Tree Lights: " . $secondString->shine();
```

### Output
In the browser at `index.php`, you should see the text "Christmas Tree Lights: " followed by four asterisks. The asterisks will be colored (red, green, and blue) symbolizing the lights on the tree. Note that the color may not show well on some backgrounds, so you may need to adjust the HTML/CSS for visibility.

### Teaching Points
1. **Single Responsibility Principle**: `Light` only handles properties/behaviors related to a single light, while `LightString` handles collections/aggregations of lights.
   
2. **Composite Pattern**: Demonstrated by having `LightString` able to contain both `Light` objects and other `LightString` objects, allowing you to compose nested structures of lights.

3. **Uniformity**: Both `Light` and `LightString` have the method `shine()` enabling them to be used interchangeably in a manner in `index.php`, showcasing the unified interface usage facilitated by the Composite Pattern.

4. **Code Organization**: By segregating classes into different files and including them as needed, code organization and maintenance become easier.

Feel free to modify the examples for clarity, practicality, and according to the nuances of your teaching style and curriculum. This simplistic example is a good starting point to elaborate on the Composite Design Pattern.
