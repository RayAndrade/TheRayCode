**IClientAdapter**

```
using System.Collections.Generic;

namespace Adapter
{
    public interface IClientAdapter
    {
        List<string> GetClientAdapterItem();
    }
}
```

**Adapter**

```
using System.Collections.Generic;

namespace Adapter
{
    public class Client
    {
        private IClientAdapter ilientAdapter;

        public Client(IClientAdapter _ilientAdapter)
        {
            this.ilientAdapter = _ilientAdapter;
        }

        public List<string> GetListOfClientItem()
        {
            return this.ilientAdapter.GetClientAdapterItem();
        }
    }
}
```
**Client**
```
using System.Collections.Generic;

namespace Adapter
{
    public class Client
    {
        private IClientAdapter ilientAdapter;

        public Client(IClientAdapter _ilientAdapter)
        {
            this.ilientAdapter = _ilientAdapter;
        }

        public List<string> GetListOfClientItem()
        {
            return this.ilientAdapter.GetClientAdapterItem();
        }
    }
}
```

**ThirdPartyAdapter.cs**

```
namespace Adapter
{
    public class ThirdPartyAdapter
    {
        private List<string> listOfString;
        public ThirdPartyAdapter()
        {
            listOfString = new List<string>();
        }

        public List<string> GetThirdPartyItem()
        {
            listOfString.Add("Laptop");
            listOfString.Add("Mouse");
            listOfString.Add("Desktop");
            listOfString.Add("keyboard");
            listOfString.Add("Pen Drive");
            return listOfString;
        }
    }
}
```

**ClientAdapter**

```
using System.Collections.Generic;

namespace Adapter
{
    public class ClientAdapter:ThirdPartyAdapter, IClientAdapter
    {
        public List<string> GetClientAdapterItem()
        {
            return GetThirdPartyItem();
        }
    }
}
```

**Program**

```
using System;
using System.Collections.Generic;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IClientAdapter iClientAdapter = new ClientAdapter();
            Client objClient = new Client(iClientAdapter);
            var listOfString = objClient.GetListOfClientItem();
            foreach (var item in listOfString)
            {
                Console.WriteLine(item);
            }
            Console.ReadKey();
            Console.WriteLine("The Ray Code is AWESOME!!!");
        }
    }
}
```


