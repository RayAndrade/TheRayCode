namespace Progam;

public class ConcreteCreatorB : Creator
{
    public override IProduct FactoryMethod()
    {
        return new ConcreteProductB();
    }
}
