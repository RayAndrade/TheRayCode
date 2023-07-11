namespace Builder
{
    public class DirectorIgor
    {
        public void Construct(IBuilder builder)
        {
            builder.SetName("Frank");
            builder.SetBodyType("Blond hair & a tan");
            builder.SetEyeColor("blue");
        }
    }
}