namespace AbstractFactory
{
    public interface IAbstractProductB
    {
        string UsefulFunctionB();
        string AnotherUsefulFunctionB(IAbstractProductA collaborator);

    }
}