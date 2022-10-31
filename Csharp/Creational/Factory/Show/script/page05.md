[back](./page4.md)

Now to create those objexts we make a Fatory for each that will look like for the GoldCustomer

```
public class GoldCustomerFactory: BaseCustomerFactory
{
    public override ICustomer CreateCustomer()
    {
        GoldCustomer objCust = new GoldCustomer();
        objCust.GoldOperation();
        return objCust;
    }
}
```    


[to slide 6](./page6.md)
