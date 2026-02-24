namespace TheRayCode;

public class ScientificReportVisitor: AnimalVisitor
{
    public override void VisitLion(Lion lion)
    {
        Console.WriteLine($"Lion {lion.Name}: Scientific name is Panthera leo, and it lives in prides.");
    }

    public override void VisitElephant(Elephant elephant)
    {
        Console.WriteLine($"Elephant {elephant.Name}: Scientific name is Loxodonta, and it has a long trunk.");
    }
}