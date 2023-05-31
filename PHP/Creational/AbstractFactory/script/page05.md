[home](./page01.md)

[back](./page04.md)
 
 So now let's create a **class** factory for the Cat object with the file name
  
**CatFactory**
 
 ```
 CatFactory
 ```
 
 and
 ```
 require_once 'Cat.php';
 ```
 
 and it implements the **AbstractPetFactory**
```
implements AbstractPetFactory
```
with

```
public function createCat(): Cat {  }
```
and for the **Dog**

```
public function createCat(): Dog {  }
```

with the code for the **Cat** requirement
```
public function createCat(): Cat {
return new class implements Cat {
    public function meow(): string {
        return 'Meow! I am a Persian cat.';
    }
};
```

and we will trow an Exception if a **Dog** is attempted

```php
throw new Exception('Cannot create dogs from a cat factory');
```


[page 6](./page06.md)
