using System.Collections.Generic;

namespace Show
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