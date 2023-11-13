namespace Show
{
    public class ComputerDirector
    {
        public Computer Build(ComputerBuilder builder)
        {
            builder.AddCPU("Intel i9");
            builder.AddRAM("32GB");
            builder.AddHDD("1TB SSD");
            return builder.GetComputer();
        }
    }
}