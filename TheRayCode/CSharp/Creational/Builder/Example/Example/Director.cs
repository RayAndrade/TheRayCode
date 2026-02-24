namespace Example;

public class Director
{
    public void Construct(Builder builder)
    {
        builder.BuildPartA(); // Instruct builder to build Part A
        builder.BuildPartB(); // Instruct builder to build Part B
    }
}