using AbstractFactory.Properties;
using AbstractFactory.Properties.abstract_products;

namespace AbstractFactory
{
    class Client
    {
        private readonly Shirt _shirt;
        private readonly Trousers _trousers;

        public Client(ClothesFactory factory)
        {
            _shirt = factory.CreateShirt();
            _trousers = factory.CreateTrousers();
        }

        public string DecribeYourCloths()
        {
            return $"Today I'm dressed in: {_shirt.GetType().Name} and {_trousers.GetType().Name}";
        }
    }
}