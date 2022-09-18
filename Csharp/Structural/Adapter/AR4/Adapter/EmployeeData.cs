namespace Adapter
{
    public class EmployeeData : IData
    {
        #region IData Members
        
       public string GetQualifiedData()
       {
            EmployeeAdaptee empadp = new EmployeeAdaptee();
            return string.Format("Total {0} {1}", empadp.ContractEmployeeData(), empadp.FullTimeEmployeeData());
       }
       
        #endregion
    }
    
    
}