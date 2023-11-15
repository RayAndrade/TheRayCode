using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IVehicle myCar = VehicleFactory.GetVehicle("Car");
            myCar.StartEngine();

            IVehicle myMotorcycle = VehicleFactory.GetVehicle("Motorcycle");
            myMotorcycle.StartEngine();
        }
    }
}