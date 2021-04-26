namespace TheRayCode.Facade
{
    public class Facade
    {
        protected SubsystemA SubsystemA;
        
        protected SubsystemB SubsystemB;

        public Facade(SubsystemA subsystemA, SubsystemB subsystemB)
        {
            this.SubsystemA = subsystemA;
            this.SubsystemB = subsystemB;
        }
        
        // The Facade's methods are convenient shortcuts to the sophisticated
        // functionality of the subsystems. However, clients get only to a
        // fraction of a subsystem's capabilities.
        public string Operation()
        {
            string result = "Facade initializes subsystems:\n";
            result += this.SubsystemA.operation1();
            result += this.SubsystemB.operation2();
            result += "Facade orders subsystems to perform the action:\n";
            result += this.SubsystemA.operationN();
            result += this.SubsystemB.operationZ();
            return result;
        }
    }

}