namespace Show
{
    public class ConcreteDoctor : DoctorPrototype
    {
        public ConcreteDoctor(string name, string specialty)
        {
            Name = name;
            Specialty = specialty;
        }

        // Implementing the Clone method
        public override DoctorPrototype Clone()
        {
            // Shallow copy (for deep copy, manually copy deeper elements)
            return this.MemberwiseClone() as DoctorPrototype;
        }

    }
}