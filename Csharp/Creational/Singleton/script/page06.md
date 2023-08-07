[home](./page01.md)

[back](./page05.md)

In Program.cs the **Main** method

```
// Get the Singleton instance
Singleton singleton1 = Singleton.Instance;
 singleton1.ShowMessage("Hello, World!");

        // Attempt to get another Singleton instance
Singleton singleton2 = Singleton.Instance;
singleton2.ShowMessage("Hello again!");

        // Prove that the instances are the same
if (Object.ReferenceEquals(singleton1, singleton2))
{
   Console.WriteLine("The instances are the same!");
}
```

[page 7](./page07.md)
