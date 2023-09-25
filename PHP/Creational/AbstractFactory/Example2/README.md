[up](../README.md)

Let's implement the Abstract Factory pattern in PHP. I'll use an example of GUI elements (buttons and checkboxes) for two different themes: Dark and Light. 

### 1. Step-by-step Class Creation:

#### 1.1. GUIFactory.php

This is the main abstract factory class. It defines the methods to create the GUI elements.

```php
<?php
// GUIFactory.php

interface GUIFactory {
    public function createButton();
    public function createCheckbox();
}
?>
```

#### 1.2. Button.php

This is an interface that all buttons will implement.

```php
<?php
// Button.php

interface Button {
    public function paint();
}
?>
```

#### 1.3. Checkbox.php

Similarly, an interface that all checkboxes will implement.

```php
<?php
// Checkbox.php

interface Checkbox {
    public function paint();
}
?>
```

#### 1.4. DarkButton.php

Implementation of a button for the Dark theme.

```php
<?php
// DarkButton.php

include_once 'Button.php';

class DarkButton implements Button {
    public function paint() {
        return "Rendering Dark-themed button";
    }
}
?>
```

#### 1.5. DarkCheckbox.php

Implementation of a checkbox for the Dark theme.

```php
<?php
// DarkCheckbox.php

include_once 'Checkbox.php';

class DarkCheckbox implements Checkbox {
    public function paint() {
        return "Rendering Dark-themed checkbox";
    }
}
?>
```

#### 1.6. LightButton.php

Implementation of a button for the Light theme.

```php
<?php
// LightButton.php

include_once 'Button.php';

class LightButton implements Button {
    public function paint() {
        return "Rendering Light-themed button";
    }
}
?>
```

#### 1.7. LightCheckbox.php

Implementation of a checkbox for the Light theme.

```php
<?php
// LightCheckbox.php

include_once 'Checkbox.php';

class LightCheckbox implements Checkbox {
    public function paint() {
        return "Rendering Light-themed checkbox";
    }
}
?>
```

#### 1.8. DarkFactory.php

Concrete factory for creating Dark-themed GUI elements.

```php
<?php
// DarkFactory.php

include_once 'GUIFactory.php';
include_once 'DarkButton.php';
include_once 'DarkCheckbox.php';

class DarkFactory implements GUIFactory {
    public function createButton() {
        return new DarkButton();
    }

    public function createCheckbox() {
        return new DarkCheckbox();
    }
}
?>
```

#### 1.9. LightFactory.php

Concrete factory for creating Light-themed GUI elements.

```php
<?php
// LightFactory.php

include_once 'GUIFactory.php';
include_once 'LightButton.php';
include_once 'LightCheckbox.php';

class LightFactory implements GUIFactory {
    public function createButton() {
        return new LightButton();
    }

    public function createCheckbox() {
        return new LightCheckbox();
    }
}
?>
```

### 2. Demonstration

#### index.php

To demonstrate the Abstract Factory pattern.

```php
<?php
// index.php

include_once 'DarkFactory.php';
include_once 'LightFactory.php';

$theme = "dark"; // You can change this to "light" to see the difference

if ($theme == "dark") {
    $factory = new DarkFactory();
} else {
    $factory = new LightFactory();
}

$button = $factory->createButton();
$checkbox = $factory->createCheckbox();

echo $button->paint() . "<br>";
echo $checkbox->paint();
?>
```

### 3. Output in the browser:

When you visit `index.php` with `$theme = "dark"`, you'll see:

```
Rendering Dark-themed button
Rendering Dark-themed checkbox
```

Change `$theme` to `"light"` in `index.php`, and you'll see:

```
Rendering Light-themed button
Rendering Light-themed checkbox
```

That's it! This example showcases how to use the Abstract Factory pattern to create families of related or dependent objects without specifying their concrete classes. In this case, the families of objects are GUI elements for different themes.
