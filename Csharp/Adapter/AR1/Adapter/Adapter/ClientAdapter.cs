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