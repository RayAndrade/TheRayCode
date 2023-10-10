What does the code that is written in php and added to the end of this prompt do? Explain each class, method and variable. This code is supposed to be an example of the Structural Bridge design pattern
The result view in the browser is added to the end of this prompt

**Abstraction.php**

```php
class Abstraction
{
    protected $implementation;

    public function __construct(Implementation $implementation)
    {
        $this->implementation = $implementation;
    }

    public function operation(): string
    {
        return "Abstraction: Base operation with:<br/>" .
            $this->implementation->operationImplementation();
    }
}
```

**Implementation.php**

```php
interface Implementation
{
    public function operationImplementation(): string;
}
```

915 497 1586 
