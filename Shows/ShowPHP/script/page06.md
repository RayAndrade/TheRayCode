[home](./page01.md)

[back](./page05.md)

For the **BirdFactory** which extends **PetFactory**.

class
```
BirdFactory
```
which
```
public function createBird() {
   return new Cat();
}
```
 but if you try to **createDog** or **createCat** you get an exception trown
 
```
 public function createDog() {
    throw new Exception("This isn't a dog house. It's a BIRD house!");
}

public function createCat() {
    throw new Exception("Cats? Too risky for our feathered friends. Strictly no cats here!");
}
```


[page 7](./page07.md)
