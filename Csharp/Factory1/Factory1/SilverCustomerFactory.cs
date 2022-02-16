namespace Factory1
{
    public class SilverCustomerFactory: BaseCustomerFactory
    {
        public override ICustomer CreateCustomer()
        {
            SilverCustomer objCust = new SilverCustomer();
            objCust.SilverOperation();
            return objCust;
        }
    }
}