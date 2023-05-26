[back](./page05.md)

For the creation of the Dog object


```
DogFactory
```

implements AbstractPetFactory


```
public function createCat(): Cat {  }
```

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


[page 7](./page07.md)
