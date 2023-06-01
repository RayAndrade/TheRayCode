[back](./page05.md)

<<<<<<< HEAD
For the creation of the **Dog** object we have the

```
DogFactory
```

```
require_once 'Dog.php';
```

which implements AbstractPetFactory

```
implements AbstractPetFactory 
```
for **Cat**
```
public function createCat(): Cat {  }
```

for **Dog**

```
public function createDog(): Dog {  }
```

we discourage the creation of cats

```
throw new Exception('Cannot create cats from a dog factory');
```

for dogs we have

```
return new class implements Dog {
    public function bark(): string {
        return 'Woof! I am a Labrador.';
    }
};
```
=======
>>>>>>> 9113628b (*)


[page 7](./page07.md)
