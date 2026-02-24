[up](../README.md)

**1. Introduction to the Bridge Design Pattern:**
The Bridge pattern is about separating an abstraction from its implementation so that the two can vary independently. It ensures that the larger structural code does not need to change when you want to change the parts it's built from.

**2. Conceptual Example:**
Imagine you have a website with two types of content, 'Article' and 'Video'. You want to render these contents in two different themes, 'Dark' and 'Light'. Instead of creating 4 combinations of classes (`DarkArticle`, `DarkVideo`, `LightArticle`, `LightVideo`), you can use the Bridge pattern to separate the content from its theme. 

**3. Order of Class Creation:**
1. `Content` (abstract class for content types like Article, Video)
2. `Theme` (interface for themes like Dark, Light)
3. `Article` and `Video` (concrete implementations of `Content`)
4. `DarkTheme` and `LightTheme` (concrete implementations of `Theme`)
5. `index.php` (demo)

**4. Code Implementation:**

*Content.php*
```php
<?php
abstract class Content {
    protected $theme;

    public function __construct(Theme $theme) {
        $this->theme = $theme;
    }

    abstract public function view(): string;
}
```

*Theme.php*
```php
<?php
interface Theme {
    public function getColor(): string;
}
```

*Article.php*
```php
<?php
include_once 'Content.php';

class Article extends Content {
    private $title;

    public function __construct($title, Theme $theme) {
        parent::__construct($theme);
        $this->title = $title;
    }

    public function view(): string {
        return "Article titled '{$this->title}' in " . $this->theme->getColor() . " theme.";
    }
}
```

*Video.php*
```php
<?php
include_once 'Content.php';

class Video extends Content {
    private $name;

    public function __construct($name, Theme $theme) {
        parent::__construct($theme);
        $this->name = $name;
    }

    public function view(): string {
        return "Video named '{$this->name}' in " . $this->theme->getColor() . " theme.";
    }
}
```

*DarkTheme.php*
```php
<?php
include_once 'Theme.php';

class DarkTheme implements Theme {
    public function getColor(): string {
        return "dark";
    }
}
```

*LightTheme.php*
```php
<?php
include_once 'Theme.php';

class LightTheme implements Theme {
    public function getColor(): string {
        return "light";
    }
}
```

*index.php*
```php
<?php
include_once 'Article.php';
include_once 'Video.php';
include_once 'DarkTheme.php';
include_once 'LightTheme.php';

$darkTheme = new DarkTheme();
$lightTheme = new LightTheme();

$darkArticle = new Article("Design Patterns", $darkTheme);
$lightVideo = new Video("Bridge Pattern Tutorial", $lightTheme);

echo $darkArticle->view() . "<br>";
echo $lightVideo->view();
```

**5. Output in Browser:**
When you open `index.php` in your browser, you should see:

```
Article titled 'Design Patterns' in dark theme.
Video named 'Bridge Pattern Tutorial' in light theme.
```

This demonstrates the power of the Bridge pattern: by separating the concerns of content and theme, you can freely combine any content with any theme without creating a combinatorial explosion of classes.
