[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

At the **Main**

```
InterpreterContext context = new InterpreterContext();
InterpreterClient client = new InterpreterClient(context);

String instruction = "clean your room";
boolean result = client.interpret(instruction);

if (result) {
    System.out.println("The child understood: Time to clean the room!");
} else {
    System.out.println("The child did not understand the instruction.");
}
```

When you run the Main.java, it will create an instance of InterpreterClient with a context. 

The client will then interpret the instruction "clean your room". 

If the interpretation is successful (i.e., the child understands), it prints "The child understood: Time to clean the room!". 

Otherwise, it prints "The child did not understand the instruction."


[page 8](./page08.md)
