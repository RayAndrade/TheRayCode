namespace Factory
{
    public class BronzeCustomerFactory: BaseCustomerFactory
    {
        public override ICustomer CreateCustomer()
        {
            BronzeCustomer objCust = new BronzeCustomer();
            objCust.BronzeOperation();
            return objCust;
        }
    }
}