using System.Collections.Generic;

namespace Show
{
    public class FlyweightFactory
    {
        private Dictionary<string, IFlyweight> flyweights = new Dictionary<string, IFlyweight>();

        public IFlyweight GetFlyweight(string key)
        {
            if (!flyweights.ContainsKey(key))
            {
                flyweights[key] = new ConcreteFlyweight(key);
            }
            return flyweights[key];
        }
    }
}