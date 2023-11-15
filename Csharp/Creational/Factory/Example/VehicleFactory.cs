using System;

namespace Show
{
    public class VehicleFactory
    {
        public static IVehicle GetVehicle(string vehicleType)
        {
            switch (vehicleType)
            {
                case "Car":
                    return new Car();
                case "Motorcycle":
                    return new Motorcycle();
                default:
                    throw new ArgumentException("Invalid vehicle type");
            }
        }
    }
}