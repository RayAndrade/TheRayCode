namespace AbstractFactory
{
    abstract class AbstractFactory : IFactory
    {
        public abstract FactoryDataItem GetData(int type);
    }
}