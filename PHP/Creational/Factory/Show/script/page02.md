[back](./page01.md)

Next we create a class we call **Rectangle**

File > New > PHP *Class*

Name: Rectangle

Namespace: TheRayCode\Factory

Template: class

[OK]

```php
include_once "Shape.php";
```
We want to inplement **Shape** [+] button
```php
implements Shape
```
next
```php
public function draw()
{
    echo "Drawing a rectangle<br/>";
}
```


[page 3](./page03.md)
