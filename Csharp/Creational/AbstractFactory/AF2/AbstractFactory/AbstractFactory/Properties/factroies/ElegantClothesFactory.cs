using AbstractFactory.Properties.abstract_products;
using AbstractFactory.Properties.products;

namespace AbstractFactory.Properties.factroies
{
    class ElegantClothesFactory
    {
        public Shirt CreateShirt()
        {
            return new DressShirt();
        }

        public Trousers CreateTrousers()
        {
            return new SuitTrousers();
        }
    }
}