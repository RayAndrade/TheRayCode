using AbstractFactory2.abstract_products;
using AbstractFactory2.products;

namespace AbstractFactory2.factroies
{
    class CasualClothesFactory:ClothesFactory
    {
        public override Shirt CreateShirt()
        {
            return new PoloShirt();
        }

        public override Trousers CreateTrousers()
        {
            return new Jeans();
        }
    }
}