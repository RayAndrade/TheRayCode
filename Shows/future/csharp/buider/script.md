
Use code with caution. Learn more

The Builder pattern is a useful pattern to use when you need to create complex objects with a lot of steps involved in the creation process. 

The Builder pattern allows you to separate the construction of the object from its representation. 

This makes the code more modular and easier to test.

The Monster class is the product of the Builder pattern. 

It represents the complex object that we want to create. 



```
// Monster.cs
public class Monster
{
    public string Head { get; set; }
    public string Torso { get; set; }
    public string Arms { get; set; }
    public string Legs { get; set; }

    public Monster(string head, string torso, string arms, string legs)
    {
        this.Head = head;
        this.Torso = torso;
        this.Arms = arms;
        this.Legs = legs;
    }
}
```
The MonsterBuilder class is the abstract builder class. 

It defines the methods that are necessary to create the Monster object. 


```
// MonsterBuilder.cs
public abstract class MonsterBuilder
{
    protected Monster monster = new Monster();

    public abstract void BuildHead();
    public abstract void BuildTorso();
    public abstract void BuildArms();
    public abstract void BuildLegs();

    public Monster GetMonster()
    {
        return this.monster;
    }
}
```

The FrankensteinMonsterBuilder class is a concrete builder class that implements the methods defined in the MonsterBuilder class. 

It provides the specific implementation of how to build the Monster object.

```
// FrankensteinMonsterBuilder.cs
public class FrankensteinMonsterBuilder : MonsterBuilder
{
    public override void BuildHead()
    {
        this.monster.Head = "A stitched-together head";
    }

    public override void BuildTorso()
    {
        this.monster.Torso = "A stitched-together torso";
    }

    public override void BuildArms()
    {
        this.monster.Arms = "A pair of stitched-together arms";
    }

    public override void BuildLegs()
    {
        this.monster.Legs = "A pair of stitched-together legs";
    }
}
```

The Demo class is the main method file that demonstrates how to use the Builder pattern. 

It creates a FrankensteinMonsterBuilder object and then calls the BuildHead(), BuildTorso(), BuildArms(), and BuildLegs() methods to build the Monster object. 

Finally, it prints the Monster object to the console.

```
// Demo.cs
public class Demo
{
    public static void Main()
    {
        FrankensteinMonsterBuilder builder = new FrankensteinMonsterBuilder();
        builder.BuildHead();
        builder.BuildTorso();
        builder.BuildArms();
        builder.BuildLegs();

        Monster monster = builder.GetMonster();
        Console.WriteLine(monster);
    }
}
```
The Builder pattern is a useful pattern to use when you need to create complex objects with a lot of steps involved in the creation process. The Builder pattern allows you to separate the construction of the object from its representation. This makes the code more modular and easier to test.

In this example, the Builder pattern is used to build a Frankenstein monster. The FrankensteinMonsterBuilder class defines the steps necessary to build the monster. The Demo class shows how to use the FrankensteinMonsterBuilder class to build a monster.



