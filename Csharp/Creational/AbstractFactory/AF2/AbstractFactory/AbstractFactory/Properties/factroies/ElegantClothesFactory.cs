using AbstractFactory.Properties.abstract_products;
using AbstractFactory.Properties.products;

namespace AbstractFactory.Properties.factroies
{
    internal class ElegantClothesFactory:ClothesFactory
    {
        public override Shirt CreateShirt()
        {
            return new DressShirt();
        }

        public override Trousers CreateTrousers()
        {
            return new SuitTrousers();
        }
    }
}