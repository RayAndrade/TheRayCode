namespace Factory1
{
    public abstract class BaseCustomerFactory
    {
        // 3:40
        public ICustomer GetCustomer()
        {
            ICustomer myCust = this.CreateCustomer();
            myCust.AddPoints();
            myCust.AddDiscount();
            return myCust;
        }
        public abstract ICustomer CreateCustomer();
    }
}