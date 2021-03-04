namespace AbstractFactory
{
    public interface IProductB
    {
        string UsefulFunctionB();
        string AnotherUsefulFunctionB(IProductA collaborator);

    }
}