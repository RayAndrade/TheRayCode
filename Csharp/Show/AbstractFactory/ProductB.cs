namespace AbstractFactory
{
    public interface ProductB
    {
        string UsefulFunctionB();
        string AnotherUsefulFunctionB(ProductA collaborator);

    }
}