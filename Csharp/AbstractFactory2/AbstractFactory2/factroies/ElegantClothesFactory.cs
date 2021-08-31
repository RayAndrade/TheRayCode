using AbstractFactory2.abstract_products;
using AbstractFactory2.products;

namespace AbstractFactory2.factroies
{
    class ElegantClothesFactory:ClothesFactory
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