[home](./page01.md) | [back](./page12.md) | [next](./page14.md)
Create class
```
Main
```
with code

```
private AbstractProductA productA;
private AbstractProductB productB;
```
and
```    
public Main(AbstractFactory factory) {
   productA = factory.createProductA();
   productB = factory.createProductB();
}
```
and
```
public void execute() {
    productA.interact(productB);
}    
```
[page 4](./page14.md)
