[home](./page01.md)

[back](./page04.md)

when we compile and run we get

```
Address of s1: 0x5644f7861eb0
Address of s2: 0x5644f7861eb0
```

In the Demo, you'll notice that the addresses of s1 and s2 are the same, confirming that they are references to the same Singleton instance. 

Attempting to create a new instance of Singleton using the constructor s3 will result in a compilation error, showcasing that the private constructor prevents direct instantiation.

[page 6](./page06.md)
