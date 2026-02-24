namespace Show
{
    public class Person
    {
        public string Name { get; set; }
        public Address Address { get; set; }

        public Person(string name, Address address)
        {
            this.Name = name;
            this.Address = address;
        }

        // Shallow copy
        public Person ShallowCopy()
        {
            return (Person)this.MemberwiseClone();
        }

        // Deep copy
        public Person DeepCopy()
        {
            return new Person(this.Name, this.Address.DeepCopy());
        }
    }
}