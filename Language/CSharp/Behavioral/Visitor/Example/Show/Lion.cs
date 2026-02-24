namespace TheRayCode;

public class Lion : Animal
{
    public Lion(string name) : base(name){ }
    
    public override void Accept(AnimalVisitor visitor)
    {
        visitor.VisitLion(this);
    }
}