using AbstractFactory.Properties.abstract_products;

namespace AbstractFactory.Properties
{
    abstract class ClothesFactory
    {
        public abstract Shirt CreateShirt();
        
        public abstract Trousers CreateTrousers();
    }
}