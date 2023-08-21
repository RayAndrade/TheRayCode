namespace Show
{
    public interface ComputerBuilder
    {
        void AddCPU(string cpu);
        void AddRAM(string ram);
        void AddHDD(string hdd);
        Computer GetComputer();
    }
}