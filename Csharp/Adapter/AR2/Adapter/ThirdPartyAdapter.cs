
using System.Collections.Generic;
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