[up](../README.md)


**Templet Design Pattern in PHP**

The Template Method Pattern defines a sequence of steps to execute an algorithm. It allows subclasses to introduce the actual implementation of steps, but ensures the sequence in which these steps are executed remains the same.

Let's imagine we're building a simple page rendering system. Our pages will have a header, body, and footer. The general structure will be defined in an abstract class, but the actual content will be determined by concrete classes.

**1. AbstractPage.php**

The abstract class that defines the template method and basic structure of our pages.

```php
<?php

abstract class AbstractPage {
    
    // Template method
    public final function render() {
        $this->header();
        $this->body();
        $this->footer();
    }

    // Common methods
    protected function header() {
        echo "<h1>Welcome to our site!</h1>";
    }

    protected function footer() {
        echo "<p>Footer information</p>";
    }

    // Abstract methods to be implemented by concrete classes
    abstract protected function body();
}

?>
```

**2. HomePage.php**

A concrete class for the homepage content.

```php
<?php

include_once 'AbstractPage.php';

class HomePage extends AbstractPage {
    protected function body() {
        echo "<p>This is the homepage body content.</p>";
    }
}

?>
```

**3. AboutPage.php**

A concrete class for the about page content.

```phpphp
<?php

include_once 'AbstractPage.php';

class AboutPage extends AbstractPage {
    protected function body() {
        echo "<p>This is the about page body content.</p>";
    }
}

?>
```

**4. index.php**

A demonstration of how to use the classes to render different pages.

```php
<?php

include_once 'HomePage.php';
include_once 'AboutPage.php';

$homePage = new HomePage();
$aboutPage = new AboutPage();

echo "<h2>Home Page</h2>";
$homePage->render();

echo "<hr>";

echo "<h2>About Page</h2>";
$aboutPage->render();

?>
```

**Instructions:**

1. Start with `AbstractPage.php`. This is your base class that defines the template.
2. Create `HomePage.php` and `AboutPage.php`. These are concrete implementations of `AbstractPage` and will provide actual content for the body.
3. Finally, create `index.php` which includes the other files and demonstrates rendering the pages.

**Browser Output (index.php)**:

You'll see:
```
Home Page
Welcome to our site!
This is the homepage body content.
Footer information

---

About Page
Welcome to our site!
This is the about page body content.
Footer information
```

The key takeaway is the sequence (header, body, footer) remains the same, but the body content can change depending on the concrete class.
