**IData.cs**

```
namespace Adapter
{
    public interface IData
    {
        string GetQualifiedData();
    }
}
```

**EmployeeData.cs**

```
namespace Adapter
{
    public class EmployeeData: IData
    {
        public string GetQualifiedData()
        {
            EmployeeAdaptee empadp = new EmployeeAdaptee();
            return string.Format("Total {0} {1}", empadp.ContractEmployeeData(), empadp.FullTimeEmployeeData());
        }
    }
}
```

**ManagersData.cs**

``namespace Adapter
{
    public class ManagersData: IData
    {
        public string GetQualifiedData()
        {
            return "All Managers qualified data";
        }
    }
}
```

**EmployeeAdaptee.cs**

```
namespace Adapter
{
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
}
```

**Program.cs**

```
using System;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ManagersData md = new ManagersData();
            Console.WriteLine(md.GetQualifiedData());
            
            EmployeeAdaptee emplo = new EmployeeAdaptee();
            string finalOutput = string.Format("Total {0} {1}", emplo.ContractEmployeeData(), emplo.FullTimeEmployeeData());
            emplo.GetQualifiedData();
            
            Console.WriteLine(finalOutput);
        }
    }
}
```
