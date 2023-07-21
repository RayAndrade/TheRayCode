namespace Show
{
    public class Address
    {
        public string Street { get; set; }
        public string City { get; set; }

        public Address(string street, string city)
        {
            this.Street = street;
            this.City = city;
        }

        // Deep copy
        public Address DeepCopy()
        {
            return new Address(this.Street, this.City);
        }
    }
}