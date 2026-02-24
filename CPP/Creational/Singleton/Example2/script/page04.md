[home](./page01.md)

[back](./page03.md)

When you run `main.cpp`, it will show that both `o1` and `o2` have the same address, proving that there's only one instance created of the `OnlyOne` class. The `demoMethod` call will print a message to the console.

To compile and run:

```bash
$ g++ OnlyOne.cpp Demo.cpp -o demo
$ ./demo
```

The output should demonstrate the Singleton pattern's behavior using the renamed `OnlyOne` class.

[page 5](./page05.md)
