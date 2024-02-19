namespace Exmple
{
    public abstract class DataProcessor
    {
        // The template method defines the skeleton of an algorithm.
        public void ProcessData()
        {
            ReadData();
            ProcessDataCore();
            WriteData();
        }

        // These are the steps that need to be implemented by subclasses.
        protected abstract void ReadData();
        protected abstract void ProcessDataCore();
        protected abstract void WriteData();
    }
}