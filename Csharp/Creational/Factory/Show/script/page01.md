[start](./page1.md)

Let's start bu creating a c# progame called **Show**.

In this artical I will review a design pattern called the **Factory** method.
I will be using the langyuage c#.

we start by creating an interface we called **ICustomer**.

highlight a file in the project > Add > Class/Inrerface > Inrerface

Name: ICustomer

```csharp

public interface ICustomer
{
    void AddPoints();
    void AddDiscount();
}

```

We want each customer to have the **AddPoints** and **AddDiscount** methods so we infource tha condisition here.


[to slide 2](./page02.md)
