[home](./page01.md)

[back](./page04.md)

For the **CatFactory** which extends **PetFactory**.

class
```
CatFactory
```
which
```
public function createCat() {
   return new Cat();
}
```
 but if you try to **createDog** or **createBird** you get an exception trown
 
```
 public function createDog() {
    throw new Exception("Hey! This is a CAT factory, not a dog factory!");
}

public function createBird() {
    throw new Exception("Birds? We don't do birds here. Only Cats. Meow!");
}
```



[page 6](./page06.md)
