[back](./page02.md)


For the **Cat** *class* the code is:

```php

 private $catType;
function __toString()
{
    return "cat and type is " . $this->catType;
}

function setCatType($str)
{
    $this->catType = $str;
}

```
 and for **Dog** it is

```php

 function __toString()
{
    return "dog";
}

``` 
 
[page 4](./page04.md)
