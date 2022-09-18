# TheRayCode
## Mediator pattern c#

We start with the **Mediator** *interface*.
The Mediator interface declares a method used by components to notify the mediator about various events. 
The Mediator may react to these events and pass the execution to other components.
```c+
public interface Mediator
{
   void Notify(object sender, string ev);
}
```
Let's extend a class we call the **ConcreteMediator** with the **Mediator** *interface*.
Concrete Mediators implement cooperative behavior by coordinating several components.

```c#
class ConcreteMediator : Mediator
{
    private ConcreateColleage1 _concreateColleage1;
    private ConcreateColleage2 _concreateColleage2;
    public ConcreteMediator(ConcreateColleage1 concreateColleage1, ConcreateColleage2 concreateColleage2)
    {
        this._concreateColleage1 = concreateColleage1;
        this._concreateColleage1.SetMediator(this);
        this._concreateColleage2 = concreateColleage2;
        this._concreateColleage2.SetMediator(this);
    } 
    public void Notify(object sender, string ev)
    {
        if (ev == "A")
        {
            Console.WriteLine("Mediator reacts on A and triggers folowing operations:");
            this._concreateColleage2.DoC();
        }
        if (ev == "D")
        {
            Console.WriteLine("Mediator reacts on D and triggers following operations:");
            this._concreateColleage1.DoB();
            this._concreateColleage2.DoC();
        }
    }
}
```
![Mediator](/UMLs/images/Mediator/Mediator-2.png)

We first create a base componet for our **Concreate Colleageies**.
The code for our interface is:
```c#
class BaseComponent
{
    protected Mediator _mediator;
    public BaseComponent(Mediator mediator = null)
    {
         this._mediator = mediator;
    }
    public void SetMediator(Mediator mediator)
    {
        this._mediator = mediator;
    }
}
```

Let's now add these **Concreate Colleageies** classes to our project.
For our first class **ConcreateColleage1** the code will be:
Concrete Colleageies implement various functionality. 
They don't depend on other components. 
They also don't depend on any concrete mediator classes.

```c#
class ConcreateColleage1 : BaseComponent
{
    public void DoA()
    {
        Console.WriteLine("Colleage 1 does A.");
        this._mediator.Notify(this, "A");
    }
    public void DoB()
    {
        Console.WriteLine("Colleage 1 does B.");
        this._mediator.Notify(this, "B");
    }
}
```

Let's create a second class we call the **ConcreateColleage2** that is **also** extended with the **BaseComponent** *class*.
```c#
class ConcreateColleage2 : BaseComponent
{
    public void DoC()
    {
        Console.WriteLine("Colleage 2 does C.");
        this._mediator.Notify(this, "C");
    }
    public void DoD()
    {
        Console.WriteLine("Colleage 2 does D.");
        this._mediator.Notify(this, "D");
    }
}
```

Let's go to the Program.cs file.
The client code.
```c+
static void Main(string[] args)
{
    ConcreateColleage1 concreateColleage1 = new ConcreateColleage1();
    ConcreateColleage2 concreateColleage2 = new ConcreateColleage2();
    new ConcreteMediator(concreateColleage1, concreateColleage2);

    Console.WriteLine("Client triggets operation A.");
    concreateColleage1.DoA();

    Console.WriteLine();
    Console.WriteLine("Client triggers operation D.");
    concreateColleage2.DoD();
    }
}
```
Let's compile this and then run, we should get:
```run
Client triggets operation A.
Colleage 1 does A.
Mediator reacts on A and triggers folowing operations:
Colleage 2 does C.

Client triggers operation D.
Colleage 2 does D.
Mediator reacts on D and triggers following operations:
Colleage 1 does B.
Colleage 2 does C.
```

The Ray Code is AWESOME!!!


[Wikipedia](https://en.wikipedia.org/wiki/Mediator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
