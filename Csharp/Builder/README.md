# TheRayCode
## Builder cpp

Unlike other creational patterns, Builder doesn’t require products to have a common interface. 
That makes it possible to produce different products using the same construction process.
The Builder pattern can be recognized in a class, which has a single creation method and several methods to configure the resulting object. 

The Builder interface specifies methods for creating the different parts of the Product objects.
We start by building an interface we call **IBuilder**.
The code for the interface will be:
```c++
public interface IBuilder
{
   void BuildPartA();
   void BuildPartB();
   void BuildPartC();
}
```
The Concrete Builder classes follow the Builder interface and provide specific implementations of the building steps. 
Your program may have several variations of Builders, implemented differently.


```c#
public class ConcreteBuilder : IBuilder
{
   private Product _product = new Product();
   public void BuildPartA()
   {
      this._product.Add("PartA1");
   }
   public ConcreteBuilder()
   {
      this.Reset();
   }
   public void BuildPartB()
   {
       this._product.Add("PartB1");
   }
   public void BuildPartC()
  {
      this._product.Add("PartC1");
  }
  public void Reset()
  {
      this._product = new Product();
  }
  public Product GetProduct()
  {
      Product result = this._product;
         this.Reset();
        return result;
   }
}
```

Concrete Builders are supposed to provide their own methods for retrieving results. 
That's because various types of builders may create entirely different products that don't follow the same interface. 
Therefore, such methods cannot be declared in the base **Builder** *interface* (at least in a statically typed programming language)

Usually, after returning the end result to the client, a builder instance is expected to be ready to start producing another product.
That's why it's a usual practice to call the reset method at the end of the *GetProduct* method body. However, this behavior is not mandatory, 
and you can make your builders wait for an explicit reset call from the client code before disposing of the previous result.

Next we create a **Product**.
It makes sense to use the Builder pattern only when your products are quite complex and require extensive configuration.

Unlike in other creational patterns, different concrete builders can produce unrelated products. 
In other words, results of various builders may not always follow the same interface.
```c#
public class Product
{
    private List<object> _parts = new List<object>();
    
    public void Add(string part)
    {
       this._parts.Add(part);
    }
        
    public string ListParts()
    {
       string str = string.Empty;
       for (int i = 0; i < this._parts.Count; i++)
       {
           str += this._parts[i] + ", ";
       }
       str = str.Remove(str.Length - 2); // removing last ",c"
       return "Product parts: " + str + "\n";
    }

}
```

The **Director** is only responsible for executing the building steps in a particular sequence. 
It is helpful when producing products according to a specific order or configuration. 
Strictly speaking, the Director class is optional, since the client can control builders directly.
```c#
public class Director
{
   private IBuilder _builder;
        
   public IBuilder Builder
   {
       set { _builder = value; } 
   }
        
   public void buildMinimalViableProduct()
   {
      this._builder.BuildPartA();
   }
        
   public void buildFullFeaturedProduct()
   {
      this._builder.BuildPartA();
      this._builder.BuildPartB();
      this._builder.BuildPartC();
    }

}
```

The client code creates a builder object, passes it to the director and then initiates the construction process. 
The end result is retrieved from the builder object.

```c#
internal static class Program
{
   static void Main(string[] args)
   {
      var director = new Director();
      var builder = new ConcreteBuilder();
      director.Builder = builder;
            
       Console.WriteLine("Standard basic product:");
       director.buildMinimalViableProduct();
       Console.WriteLine(builder.GetProduct().ListParts());

       Console.WriteLine("Standard full featured product:");
       director.buildFullFeaturedProduct();
       Console.WriteLine(builder.GetProduct().ListParts());

       // Remember, the Builder pattern can be used without a Director
       // class.
       Console.WriteLine("Custom product:");
       builder.BuildPartA();
       builder.BuildPartC();
       Console.Write(builder.GetProduct().ListParts());
   }
}
```
Compile and *run* and you should get:
```
Standard basic product:
Product parts: PartA1

Standard full featured product:
Product parts: PartA1, PartB1, PartC1

Custom product:
Product parts: PartA1, PartC1
```

The Ray code is AWESOME!!!
----------------------------------------------------------------------------------------------------

[wikipedia](https://en.wikipedia.org/wiki/Builder_pattern)

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


