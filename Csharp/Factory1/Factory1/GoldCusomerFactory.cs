namespace Factory1
{
    public class GoldCusomerFactory : BaseCustomerFactory
    {
        public override ICustomer CreateCustomer()
        {
            GoldCustomer objCust = new GoldCustomer();
            objCust.GoldOperation();
            return objCust;
        }
    }
}