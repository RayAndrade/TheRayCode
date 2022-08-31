[youtube video-DotNetIQ](https://youtu.be/YsAAzosaM2Y "DotNetIQ")

These notes are taken as:DotNetIQ

Show a picture of an electial plug atapter.

The goal is hare one side work with the other side.

Adapter pattern translates interface of a class into another interface client expects.


An Adapter allows classes to work together that normally could not because of incompatible interfaces, by
providing its interface fo clients whild using the original interface.

TODO: Create a uml simular to the uml found at 6:19

Also called the wrapper patern.

uml:

Inline-style: 
![Adapter design pattern](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/Adapter141.png "Adapter design pattern")

Let's now look at some code:

@ 6:21

main method view at 7:27
```csharp


static void Main(string[] ars)
{
     ManagersData md = new ManagersData();
     Console.WriteLine( md.GetQualifiedData() );
     
     // Remove during video
     // EmployeeData emplo = new EmployeeData();
     // emplo.GetQualifiedData();
     

      EmployeeAdaptee emplo = new EmployeeAdaptee();
      string finalOutput = string.Format("Total {0} {1}", emplo.ContractEmployeeData(), emplo.FullTimeEmployeeData());
      emplo.GetQualifiedData();
     
     Console.ReadLine();
}

```
@ 7:38

Let now take a look at class **ManagerData**

```csharp
public class ManagersData  // IData
{
   public string GetQualifiedData()
   {
       return "All Managers qualified data";
   }
}
```

@ 8:16

```csharp
public class EmployeeAdaptee
{
    public string FullTimeEmployeeData()
    {
        return "All full time employee data"; 
    }
    public string ContractEmployeeData()
    {
        return "All contract employee data";
    }

    public void GetQualifiedData()
    {
        throw new System.NotImplementedException();
    }
}
```











































