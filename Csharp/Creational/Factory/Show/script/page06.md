[back](./page05.md)

Now to create those objexts we make a Fatory for each that will look like for the SilverCustomer

```
public class SilverCustomerFactory: BaseCustomerFactory
{
    public override ICustomer CreateCustomer()
    {
        SilverCustomer objCust = new SilverCustomer();
        objCust.SilverOperation();
        return objCust;
    }
}
```    


[to slide 7](./page07.md)
