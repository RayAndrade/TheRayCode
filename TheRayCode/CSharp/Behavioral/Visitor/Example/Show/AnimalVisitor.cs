namespace TheRayCode;

public abstract class AnimalVisitor
{
    public abstract void VisitLion(Lion lion);
    public abstract void VisitElephant(Elephant elephant);
}