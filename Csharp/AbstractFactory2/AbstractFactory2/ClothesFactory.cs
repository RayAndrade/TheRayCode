using AbstractFactory2.abstract_products;

namespace AbstractFactory2
{
    abstract class ClothesFactory
    {
        public abstract Shirt CreateShirt();
        
        public abstract Trousers CreateTrousers();
    }
}