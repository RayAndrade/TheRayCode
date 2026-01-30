using System.Collections.Generic;

namespace Show
{
    public class ClientAdapter:ThirdPartyAdapter, IClientAdapter
    {
        public List<string> GetClientAdapterItem()
        {
            return GetThirdPartyItem();
        }
    }
}