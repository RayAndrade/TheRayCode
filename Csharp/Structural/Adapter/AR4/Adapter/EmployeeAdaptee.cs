namespace Adapter
{
    public class EmployeeAdaptee
    {
        public string FullTimeEmployeeData()
        {
            return "All full time employee data";
        }

        public string ContractEmployeeData()
        {
            return "All contract employee data";
        }

        public void GetQualifiedData()
        {
            throw new System.NotImplementedException();
        }
    }
}