namespace AbstractFactory
{
    interface IFactory
    {
        FactoryDataItem GetData(int type);
    }
}