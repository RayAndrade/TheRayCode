namespace Show
{
    public class Person
    {
        public string Name { get; set; }
        public Address Address { get; set; }

        public Person(string name, Address address)
        {
            Name = name;
            Address = address;
        }
        public Person ShallowCopy()
        {
            return (Person)this.MemberwiseClone();
        }
        public Person DeepCopy()
        {
            Address clonedAddress = new Address(Address.Street, Address.City);
            return new Person(Name, clonedAddress);
        }
    }
}