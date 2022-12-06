using AbstractFactory.Properties.abstract_products;

namespace AbstractFactory.Properties.factroies
{
    class CasualClothesFactory:ClothesFactory
    {
        public override Shirt CreateShirt()
        {
            throw new System.NotImplementedException();
        }

        public override Trousers CreateTrousers()
        {
            throw new System.NotImplementedException();
        }
    }
}