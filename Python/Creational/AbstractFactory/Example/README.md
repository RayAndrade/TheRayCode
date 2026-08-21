
## Project Structure

```text
abstract_factory_python/
│
├── main.py
│
├── factories/
│   ├── abstract_factory.py
│   ├── windows_factory.py
│   └── mac_factory.py
│
└── products/
    ├── abstract_button.py
    ├── abstract_checkbox.py
    ├── windows_button.py
    ├── windows_checkbox.py
    ├── mac_button.py
    └── mac_checkbox.py
```
Good — this is exactly how you should teach it 👍
We’ll go **file by file**, with **line-by-line comments** so your students can follow *every single step*.

---

# 1. `products/abstract_button.py`

```python
# Import the Abstract Base Class tools from Python's standard library
from abc import ABC, abstractmethod


# Define an abstract class (cannot be instantiated directly)
class AbstractButton(ABC):

    # Declare an abstract method (must be implemented by subclasses)
    @abstractmethod
    def render(self):
        pass  # No implementation here (forces subclasses to define it)
```

---

# 2. `products/abstract_checkbox.py`

```python
# Import tools for creating abstract classes
from abc import ABC, abstractmethod


# Define another abstract product
class AbstractCheckbox(ABC):

    # Abstract method that subclasses must implement
    @abstractmethod
    def render(self):
        pass  # Placeholder (no behavior yet)
```

---

# 3. `products/windows_button.py`

```python
# Import the abstract base class for buttons
from products.abstract_button import AbstractButton


# Concrete implementation of a Button for Windows
class WindowsButton(AbstractButton):

    # Provide the required implementation of render()
    def render(self):
        print("Rendering a Windows button.")  # Output specific to Windows style
```

---

# 4. `products/windows_checkbox.py`

```python
# Import the abstract checkbox class
from products.abstract_checkbox import AbstractCheckbox


# Concrete Windows version of Checkbox
class WindowsCheckbox(AbstractCheckbox):

    # Implement the required render() method
    def render(self):
        print("Rendering a Windows checkbox.")  # Windows-specific behavior
```

---

# 5. `products/mac_button.py`

```python
# Import the abstract button class
from products.abstract_button import AbstractButton


# Concrete Mac version of Button
class MacButton(AbstractButton):

    # Implement the abstract method
    def render(self):
        print("Rendering a Mac button.")  # Mac-specific behavior
```

---

# 6. `products/mac_checkbox.py`

```python
# Import the abstract checkbox class
from products.abstract_checkbox import AbstractCheckbox


# Concrete Mac version of Checkbox
class MacCheckbox(AbstractCheckbox):

    # Implement the abstract method
    def render(self):
        print("Rendering a Mac checkbox.")  # Mac-specific behavior
```

---

# 7. `factories/abstract_factory.py`

```python
# Import tools to define abstract classes
from abc import ABC, abstractmethod


# Abstract Factory interface
class AbstractFactory(ABC):

    # Abstract method to create a Button
    @abstractmethod
    def create_button(self):
        pass  # No implementation (must be defined by concrete factories)

    # Abstract method to create a Checkbox
    @abstractmethod
    def create_checkbox(self):
        pass  # Must be implemented by subclasses
```

---

# 8. `factories/windows_factory.py`

```python
# Import the abstract factory interface
from factories.abstract_factory import AbstractFactory

# Import concrete Windows products
from products.windows_button import WindowsButton
from products.windows_checkbox import WindowsCheckbox


# Concrete Factory for Windows products
class WindowsFactory(AbstractFactory):

    # Create and return a Windows Button object
    def create_button(self):
        return WindowsButton()  # Instantiate WindowsButton

    # Create and return a Windows Checkbox object
    def create_checkbox(self):
        return WindowsCheckbox()  # Instantiate WindowsCheckbox
```

---

# 9. `factories/mac_factory.py`

```python
# Import the abstract factory interface
from factories.abstract_factory import AbstractFactory

# Import concrete Mac products
from products.mac_button import MacButton
from products.mac_checkbox import MacCheckbox


# Concrete Factory for Mac products
class MacFactory(AbstractFactory):

    # Create and return a Mac Button
    def create_button(self):
        return MacButton()  # Instantiate MacButton

    # Create and return a Mac Checkbox
    def create_checkbox(self):
        return MacCheckbox()  # Instantiate MacCheckbox
```

---

# 10. `main.py`

```python
# Import concrete factories
from factories.windows_factory import WindowsFactory
from factories.mac_factory import MacFactory


# Client code that works with ANY factory
def client_code(factory):

    # Ask the factory to create a button
    button = factory.create_button()

    # Ask the factory to create a checkbox
    checkbox = factory.create_checkbox()

    # Use the created objects
    button.render()     # Call the button's behavior
    checkbox.render()   # Call the checkbox's behavior


# Entry point of the program
def main():

    # Inform the user which factory is being used
    print("Using the Windows Factory:")

    # Create a Windows factory object
    windows_factory = WindowsFactory()

    # Pass it to the client code
    client_code(windows_factory)

    # Separate output visually
    print("\nUsing the Mac Factory:")

    # Create a Mac factory object
    mac_factory = MacFactory()

    # Pass it to the same client code
    client_code(mac_factory)


# Standard Python idiom to run main()
if __name__ == "__main__":
    main()  # Execute the program
```

---
