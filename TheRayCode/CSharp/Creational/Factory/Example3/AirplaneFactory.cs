using System;

namespace Show
{
    public static class AirplaneFactory
    {
        public static IAirplane GetAirplane(string airplaneType)
        {
            switch (airplaneType)
            {
                case "Jet":
                    return new Jet();
                case "PropellerPlane":
                    return new PropellerPlane();
                default:
                    throw new ArgumentException("Invalid airplane type");
            }
        }
    }
}