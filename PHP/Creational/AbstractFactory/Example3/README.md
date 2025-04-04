Here’s a full PHP example of the **Abstract Factory**, a **Creational** design pattern from the Gang of Four’s *Design Patterns: Elements of Reusable Object-Oriented Software*. Each class/interface is placed in its own file, and I've ordered them to prevent dependency issues.

---

# 🏗️ Abstract Factory Pattern in PHP

## 📚 Context

The **Abstract Factory** pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes.

In this example, we simulate UI widget creation for different operating systems (Motif and Windows). The `AbstractFactory` declares creation methods for families of widgets, and concrete factories implement them.

---

## 🧱 Class Creation Order

1. `WidgetFactory.php` – Abstract Factory Interface
2. `Window.php`, `ScrollBar.php` – Abstract Product Interfaces
3. `MotifWindow.php`, `MotifScrollBar.php` – Concrete Products (Motif)
4. `WindowsWindow.php`, `WindowsScrollBar.php` – Concrete Products (Windows)
5. `MotifWidgetFactory.php`, `WindowsWidgetFactory.php` – Concrete Factories
6. `Client.php` – Uses factories to create products
7. `index.php` – Demo runner

---

## 📄 File: `WidgetFactory.php`

```php
<?php
// Abstract Factory Interface
interface WidgetFactory {
    public function createWindow(): Window;
    public function createScrollBar(): ScrollBar;
}
?>
```

**Explanation**:
- `WidgetFactory` defines two methods for creating abstract product types: `Window` and `ScrollBar`.

---

## 📄 File: `Window.php`

```php
<?php
// Abstract Product Interface
interface Window {
    public function render(): void;
}
?>
```

**Explanation**:
- `Window` is an abstract product with a `render()` method, which must be implemented by concrete windows.

---

## 📄 File: `ScrollBar.php`

```php
<?php
// Abstract Product Interface
interface ScrollBar {
    public function scroll(): void;
}
?>
```

**Explanation**:
- `ScrollBar` declares the `scroll()` behavior, implemented by concrete scrollbars.

---

## 📄 File: `MotifWindow.php`

```php
<?php
include 'Window.php';

// Concrete Product
class MotifWindow implements Window {
    public function render(): void {
        echo "Rendering a Motif style Window\n";
    }
}
?>
```

---

## 📄 File: `MotifScrollBar.php`

```php
<?php
include 'ScrollBar.php';

// Concrete Product
class MotifScrollBar implements ScrollBar {
    public function scroll(): void {
        echo "Scrolling with a Motif style ScrollBar\n";
    }
}
?>
```

---

## 📄 File: `WindowsWindow.php`

```php
<?php
include 'Window.php';

// Concrete Product
class WindowsWindow implements Window {
    public function render(): void {
        echo "Rendering a Windows style Window\n";
    }
}
?>
```

---

## 📄 File: `WindowsScrollBar.php`

```php
<?php
include 'ScrollBar.php';

// Concrete Product
class WindowsScrollBar implements ScrollBar {
    public function scroll(): void {
        echo "Scrolling with a Windows style ScrollBar\n";
    }
}
?>
```

---

## 📄 File: `MotifWidgetFactory.php`

```php
<?php
include 'WidgetFactory.php';
include 'MotifWindow.php';
include 'MotifScrollBar.php';

// Concrete Factory
class MotifWidgetFactory implements WidgetFactory {
    public function createWindow(): Window {
        return new MotifWindow();
    }

    public function createScrollBar(): ScrollBar {
        return new MotifScrollBar();
    }
}
?>
```

---

## 📄 File: `WindowsWidgetFactory.php`

```php
<?php
include 'WidgetFactory.php';
include 'WindowsWindow.php';
include 'WindowsScrollBar.php';

// Concrete Factory
class WindowsWidgetFactory implements WidgetFactory {
    public function createWindow(): Window {
        return new WindowsWindow();
    }

    public function createScrollBar(): ScrollBar {
        return new WindowsScrollBar();
    }
}
?>
```

---

## 📄 File: `Client.php`

```php
<?php
include 'WidgetFactory.php';
include 'Window.php';
include 'ScrollBar.php';

// Client Class
class Client {
    private Window $window;
    private ScrollBar $scrollBar;

    public function __construct(WidgetFactory $factory) {
        // Use factory to create UI components
        $this->window = $factory->createWindow();
        $this->scrollBar = $factory->createScrollBar();
    }

    public function renderUI(): void {
        $this->window->render();
        $this->scrollBar->scroll();
    }
}
?>
```

**Explanation**:
- The `Client` class receives a factory object and uses it to create products.
- It doesn’t know the concrete classes, just the interfaces.

---

## 📄 File: `index.php`

```php
<?php
include 'MotifWidgetFactory.php';
include 'WindowsWidgetFactory.php';
include 'Client.php';

echo "Using Motif Theme:\n";
$motifFactory = new MotifWidgetFactory();
$client1 = new Client($motifFactory);
$client1->renderUI();

echo "\nUsing Windows Theme:\n";
$windowsFactory = new WindowsWidgetFactory();
$client2 = new Client($windowsFactory);
$client2->renderUI();
?>
```

**Output**:
```
Using Motif Theme:
Rendering a Motif style Window
Scrolling with a Motif style ScrollBar

Using Windows Theme:
Rendering a Windows style Window
Scrolling with a Windows style ScrollBar
```

---

## ✅ Summary

| Class | Role |
|-------|------|
| `WidgetFactory` | Abstract Factory |
| `Window`, `ScrollBar` | Abstract Products |
| `MotifWindow`, `MotifScrollBar` | Concrete Products |
| `WindowsWindow`, `WindowsScrollBar` | Concrete Products |
| `MotifWidgetFactory`, `WindowsWidgetFactory` | Concrete Factories |
| `Client` | Uses factories to produce products |
| `index.php` | Demonstrates the usage |

Let me know if you’d like a ZIP archive with the files or a GitHub-style layout for students!
