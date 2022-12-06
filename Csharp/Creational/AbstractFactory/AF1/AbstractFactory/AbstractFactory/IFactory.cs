namespace AbstractFactory
{
    public interface IFactory
    {
        FactoryDataItem GetData(int type);
    }
}