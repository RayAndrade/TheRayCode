[home](./page01.md)

[back](./page07.md)

We require the files that we just made:
```
require 'Facade.php';
require 'TextDecorator.php';
require 'BoldDecorator.php';
require 'ItalicDecorator.php';
require 'UnderlineDecorator.php';
```
Create the decorators
```
$boldDecorator = new BoldDecorator();
$italicDecorator = new ItalicDecorator();
$underlineDecorator = new UnderlineDecorator();
```

Use the **Facade** and apply decorators
```
$formattedText = Facade::decorateText($text, [$boldDecorator, $italicDecorator, $underlineDecorator]);
```

Output the formatted text
```
echo $formattedText;
```

[page 9](./page09.md)
