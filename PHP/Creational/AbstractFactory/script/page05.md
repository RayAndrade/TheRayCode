[home](./page01.md)

[back](./page04.md)
 
 
<<<<<<< HEAD
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

=======
>>>>>>> 9113628b (*)

[page 6](./page06.md)
