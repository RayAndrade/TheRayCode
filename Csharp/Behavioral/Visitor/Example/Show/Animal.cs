namespace TheRayCode;

public abstract class Animal
{
    public string Name { get; }
    
    protected Animal(string name)
    {
        Name = name;
    }
    
    public abstract void Accept(AnimalVisitor visitor);
}