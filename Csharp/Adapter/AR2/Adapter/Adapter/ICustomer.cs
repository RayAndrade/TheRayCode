using System.Collections.Generic;

namespace Adapter
{
    public interface ICustomer
    {
        IEnumerable<CustomerDTO> GetCustomers();
    }
}