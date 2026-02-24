namespace TheRayCode;

public class Elephant  : Animal
{
    public Elephant(string name) : base(name) { }
    
    public override void Accept(AnimalVisitor visitor)
    {
        visitor.VisitElephant(this);
    }
}