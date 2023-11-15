using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IAirplane myJet = AirplaneFactory.GetAirplane("Jet");
            myJet.Fly();

            IAirplane myPropellerPlane = AirplaneFactory.GetAirplane("PropellerPlane");
            myPropellerPlane.Fly();
        }
    }
}