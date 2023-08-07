[home](./page01.md)

[back](./page04.md)

Now let go to the **Main** and create a demo


Explanation:
- The `Singleton` class is sealed to prevent inheritance, which could otherwise allow additional instances to be created.
- The `padlock` object is used to ensure that only one thread at a time can access the instance creation code. This makes the Singleton thread-safe.
- The private constructor ensures that no external code can create an instance.
- The public `Instance` property is the way to access the single instance of the class. If an instance does not already exist, one is created.


[page 6](./page06.md)
