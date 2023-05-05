[home](./page01.md)

[back](./page05.md)

Let's put this all together in main


```
PetFactory factory = new PetFactory();

Pet bird = factory.createPet("bird");
System.out.println(bird.getType()); // Output: I am a bird.

Pet dog = factory.createPet("dog");
System.out.println(dog.getType()); // Output: I am a dog.

Pet cat = factory.createPet("cat");
System.out.println(cat.getType()); // Output: I am a cat.
```

[page 7](./page07.md)
