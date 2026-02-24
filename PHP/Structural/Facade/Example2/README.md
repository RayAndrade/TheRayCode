[up](../README.md)

The Facade Decorator design pattern is a combination of two design patterns: the Facade pattern and the Decorator pattern. The Facade pattern provides a simplified interface to a complex system of classes, while the Decorator pattern allows you to add new functionality to an object dynamically. In this example, we'll create a simple use case where we have a Facade that provides a unified interface to decorate a text string with various formatting options.

Here's a step-by-step breakdown of how to create this example:

1. Create the project structure:

   ```
   project/
   ├── index.php
   ├── Facade.php
   ├── TextDecorator.php
   ├── BoldDecorator.php
   ├── ItalicDecorator.php
   ├── UnderlineDecorator.php
   ```

2. Define the classes in their respective files:

   **Facade.php**: This class will act as a facade and provide a simplified interface for decorating text.

   ```php
   <?php
   class Facade {
       public static function decorateText($text, $decorators) {
           foreach ($decorators as $decorator) {
               $text = $decorator->decorate($text);
           }
           return $text;
       }
   }
   ?>
   ```

   **TextDecorator.php**: This interface defines the contract for text decorators.

   ```php
   <?php
   interface TextDecorator {
       public function decorate($text);
   }
   ?>
   ```

   **BoldDecorator.php**: This class will add bold formatting to the text.

   ```php
   <?php
   class BoldDecorator implements TextDecorator {
       public function decorate($text) {
           return "<strong>$text</strong>";
       }
   }
   ?>
   ```

   **ItalicDecorator.php**: This class will add italic formatting to the text.

   ```php
   <?php
   class ItalicDecorator implements TextDecorator {
       public function decorate($text) {
           return "<em>$text</em>";
       }
   }
   ```

   **UnderlineDecorator.php**: This class will add underline formatting to the text.

   ```php
   <?php
   class UnderlineDecorator implements TextDecorator {
       public function decorate($text) {
           return "<u>$text</u>";
       }
   }
   ```

3. In your `index.php`, you can use the Facade to demonstrate how to decorate text:

   ```php
   <?php
   require 'Facade.php';
   require 'TextDecorator.php';
   require 'BoldDecorator.php';
   require 'ItalicDecorator.php';
   require 'UnderlineDecorator.php';

   // Create some text
   $text = "Hello, World!";

   // Create decorators
   $boldDecorator = new BoldDecorator();
   $italicDecorator = new ItalicDecorator();
   $underlineDecorator = new UnderlineDecorator();

   // Use the Facade to apply decorators
   $formattedText = Facade::decorateText($text, [$boldDecorator, $italicDecorator, $underlineDecorator]);

   // Output the formatted text
   echo $formattedText;
   ?>
   ```

4. When you access `index.php` in a web browser, you should see the following output:

   ```
   <strong><em><u>Hello, World!</u></em></strong>
   ```

This example demonstrates how the Facade Decorator design pattern can be used to simplify the process of decorating text with different formatting options. The Facade class provides a single interface to apply multiple decorators, making the code more maintainable and extensible. The decorators themselves (BoldDecorator, ItalicDecorator, and UnderlineDecorator) implement the TextDecorator interface, allowing you to easily add new decorators in the future.
