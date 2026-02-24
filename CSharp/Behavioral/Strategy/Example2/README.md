[up](../README.md)

Creating a humorous example to teach the Strategy design pattern in C# using .NET Framework 4.8 can be both engaging and educational for your students. Let's design a simple scenario where different strategies are employed to execute a task. We'll create a scenario where various animals try to cross a river using different strategies.

### Project Structure
1. **Strategy Interface (IRiverCrossingStrategy.cs):** Defines the action all strategies must implement.
2. **Concrete Strategies (SwimStrategy.cs, JumpStrategy.cs, FlyStrategy.cs):** Implement the strategy interface with specific behaviors.
3. **Context Class (Animal.cs):** Uses a strategy and provides a method to set it dynamically.
4. **Program.cs:** Entry point of the application to demonstrate the use of strategies.

### Order of Creation
1. Create `IRiverCrossingStrategy.cs`
2. Create `SwimStrategy.cs`, `JumpStrategy.cs`, and `FlyStrategy.cs`
3. Create `Animal.cs`
4. Implement the `Program.cs`

### Detailed Explanation
1. **IRiverCrossingStrategy.cs**
   ```csharp
   // Defines the method all crossing strategies must implement.
   public interface IRiverCrossingStrategy
   {
       string CrossRiver();
   }
   ```

2. **SwimStrategy.cs**
   ```csharp
   // Strategy for crossing the river by swimming.
   public class SwimStrategy : IRiverCrossingStrategy
   {
       public string CrossRiver()
       {
           return "Swimming across the river!";
       }
   }
   ```

3. **JumpStrategy.cs**
   ```csharp
   // Strategy for crossing the river by jumping.
   public class JumpStrategy : IRiverCrossingStrategy
   {
       public string CrossRiver()
       {
           return "Jumping over the river in a single leap!";
       }
   }
   ```

4. **FlyStrategy.cs**
   ```csharp
   // Strategy for crossing the river by flying.
   public class FlyStrategy : IRiverCrossingStrategy
   {
       public string CrossRiver()
       {
           return "Flying over the river!";
       }
   }
   ```

5. **Animal.cs**
   ```csharp
   // The context class that can change its strategy.
   public class Animal
   {
       private IRiverCrossingStrategy _strategy;

       public Animal(IRiverCrossingStrategy strategy)
       {
           _strategy = strategy;
       }

       public void SetStrategy(IRiverCrossingStrategy strategy)
       {
           _strategy = strategy;
       }

       public string ExecuteStrategy()
       {
           return _strategy.CrossRiver();
       }
   }
   ```

6. **Program.cs**
   ```csharp
   // Demonstrates the Strategy pattern in action.
   using System;

   class Program
   {
       static void Main(string[] args)
       {
           Animal frog = new Animal(new JumpStrategy());
           Console.WriteLine($"Frog: {frog.ExecuteStrategy()}");

           Animal fish = new Animal(new SwimStrategy());
           Console.WriteLine($"Fish: {fish.ExecuteStrategy()}");

           Animal bird = new Animal(new FlyStrategy());
           Console.WriteLine($"Bird: {bird.ExecuteStrategy()}");
       }
   }
   ```

### Terminal Output
When you run the program, the output in the terminal will be:
```
Frog: Jumping over the river in a single leap!
Fish: Swimming across the river!
Bird: Flying over the river!
```

This example uses humor and an easy-to-understand scenario to illustrate how the Strategy pattern allows for changing the behavior (river crossing strategy) of objects (animals) at runtime.
