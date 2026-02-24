namespace Progam;

public class ConcreteCreatorA : Creator
{
    public override IProduct FactoryMethod()
    {
        return new ConcreteProductA();
    }
}