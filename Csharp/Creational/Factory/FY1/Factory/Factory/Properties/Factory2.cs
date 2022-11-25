namespace Factory.Properties
{
    class Factory2 : Creator
    {
        public override IProduct FactoryMethod()
        {
            return new Product2();
        }
    }
}