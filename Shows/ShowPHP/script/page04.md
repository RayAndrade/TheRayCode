[home](./page01.md)

[back](./page03.md)

For the **DogFactory** which extends **PetFactory**.

class
```
DogFactory
```
which
```
public function createDog() {
   return new Dog();
}
```
 but if you try to **createCat** or **createBird** you get an exception trown
 
```
 public function createCat() {
    throw new Exception("Hey! This is a DOG factory, not a cat factory!");
}

public function createBird() {
    throw new Exception("Birds? We don't do birds here. Only dogs. Woof!");
}
```



[page 5](./page05.md)
