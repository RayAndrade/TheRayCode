[home](./page01.md)

[back](./page04.md)
 
 So now let's create a factory for the Cat object
 
 
**CatFactory**
 
 implements: **AbstractPetFactory**
 
```
public function createCat(): Cat {  }
```

and

```
public function createDog(): Dog {  }
```

for creating Cat objects

```php
return new class implements Cat {
    public function meow(): string {
        return 'Meow! I am a Persian cat.';
    }
};
```

and for dog we disalow that

```php
throw new Exception('Cannot create dogs from a cat factory');
```


[page 6](./page06.md)
