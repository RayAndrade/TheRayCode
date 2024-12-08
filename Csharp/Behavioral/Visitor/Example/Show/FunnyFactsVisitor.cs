namespace TheRayCode;

public class FunnyFactsVisitor: AnimalVisitor
{
    public override void VisitLion(Lion lion)
    {
        Console.WriteLine($"Lion {lion.Name}: Loves naps but roars loudly to wake everyone else!");
    }

    public override void VisitElephant(Elephant elephant)
    {
        Console.WriteLine($"Elephant {elephant.Name}: Thinks peanuts are overrated but enjoys painting!");
    }
}