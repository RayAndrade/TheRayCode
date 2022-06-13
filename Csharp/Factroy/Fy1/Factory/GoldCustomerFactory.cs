namespace Factory
{
    public class GoldCustomerFactory: BaseCustomerFactory
    {
        public override ICustomer CreateCustomer()
        {
            GoldCustomer objCust = new GoldCustomer();
            objCust.GoldOperation();
            return objCust;
        }
    }
}