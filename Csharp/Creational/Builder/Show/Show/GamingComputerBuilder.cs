namespace Show
{
    public class GamingComputerBuilder : ComputerBuilder
    {
        private Computer _computer = new Computer();
        
        public void AddCPU(string cpu)
        {
            _computer.CPU = cpu;

        }

        public void AddRAM(string ram)
        {
            _computer.RAM = ram;
        }

        public void AddHDD(string hdd)
        {
            _computer.HDD = hdd;
        }

        public Computer GetComputer()
        {
            return _computer;
        }
    }
}