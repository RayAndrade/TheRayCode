namespace Show
{
    public abstract class DoctorPrototype
    {
        // Add necessary properties for a doctor
        public string Name { get; set; }
        public string Specialty { get; set; }

        // The Clone method
        public abstract DoctorPrototype Clone();
    }
}