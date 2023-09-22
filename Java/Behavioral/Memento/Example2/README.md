# TheRayCode
## Memento pattern java

Using the memento design pattern we can restore an object to its previous state and undo or rollback operations.

We start with by creating a **LedTV** class will represent a LED TV.
We add variables for the size, price and USB suport.
The variables for the size, price and USB suport can be pass in at initaition.

```java
public class LedTV {
    private String  size;
    private String  price;
    private boolean usbSupport;

    public LedTV( String size, String price, boolean usbSupport ) {
        super();
        this.size = size;
        this.price = price;
        this.usbSupport = usbSupport;
    }

    public String getSize(){
        return size;
    }
    public void setSize( String size ){
        this.size = size;
    }
    public String getPrice(){
        return price;
    }
    public void setPrice( String price ){
        this.price = price;
    }
    public boolean isUsbSupport(){
        return usbSupport;
    }
    public void setUsbSupport( boolean usbSupport ){
        this.usbSupport = usbSupport;
    }
    @Override
    public String toString(){
        return "LedTV [size=" + size + ", price=" + price + ", usbSupport=" + usbSupport + "]";
    }
}
```
We create a class for our **Memento** object.
The **Memento** class is used to store the state of the object.

```java
public class Memento {
    private LedTV ledTV;

    public Memento( LedTV ledTV ) {
        super();
        this.ledTV = ledTV;
    }
    public LedTV getLedTV(){
        return ledTV;
    }
    public void setLedTV( LedTV ledTV ) {
        this.ledTV = ledTV;
    }
    @Override
    public String toString() {
        return "Memento [ledTV=" + ledTV + "]";
    }
}
```

The **Caretaker** is the 'storeroom' and it will maintain the memento object.

```java
import java.util.ArrayList;
import java.util.List;

public class Caretaker {

    private List<Memento> ledTvList = new ArrayList<Memento>();

    public void addMemento( Memento m ) {
        ledTvList.add(m);
        System.out.println("LED TV's snapshots Maintained by CareTaker :" + ledTvList);
    }

    public Memento getMemento( int index ) {
        return ledTvList.get(index);
    }
}
```
The **Originator** is a hub that contains the **ledTV**.
The **Originator** can invoke the **createMemento** to create a new **Memento** object
The **setMemento** can be use to initlize the **Memento**.
```java
public class Originator {
    LedTV ledTV;
    public LedTV getLedTV(){
        return ledTV;
    }
    public void setLedTV( LedTV ledTV ){
        this.ledTV = ledTV;
    }
    public Memento createMemento(){
        return new Memento(ledTV);
    }
    public void setMemento( Memento memento ){
        ledTV = memento.getLedTV();
    }
    @Override
    public String toString() {
        return "Originator [ledTV=" + ledTV + "]";
    }
}
```
We put this altogether in the main method we find it in the ***MementoClient**.
This method is used to demo to **Memento** design pattern.
```java
public class MementoClient {
    public static void main( String[] args ) {
        Originator originator = new Originator();
        originator.setLedTV(new LedTV("42 inch", "60000Rs", false));
        Caretaker caretaker = new Caretaker();
        caretaker.addMemento(originator.createMemento());
        originator.setLedTV(new LedTV("46 inch", "80000Rs", true));
        caretaker.addMemento(originator.createMemento());
        originator.setLedTV(new LedTV("50 inch", "100000Rs", true));
        System.out.println("\nOrignator current state : " + originator);
        System.out.println("\nOriginator restoring to 42 inch LED TV...");
        originator.setMemento(caretaker.getMemento(0));
        System.out.println("\nOrignator current state : " + originator);

    }
}
```

Let's compile and run we should get...
```run
LED TV's snapshots Maintained by CareTaker :[Memento [ledTV=LedTV [size=42 inch, price=60000Rs, usbSupport=false]]]
LED TV's snapshots Maintained by CareTaker :[Memento [ledTV=LedTV [size=42 inch, price=60000Rs, usbSupport=false]], Memento [ledTV=LedTV [size=46 inch, price=80000Rs, usbSupport=true]]]

Orignator current state : Originator [ledTV=LedTV [size=50 inch, price=100000Rs, usbSupport=true]]

Originator restoring to 42 inch LED TV...

Orignator current state : Originator [ledTV=LedTV [size=42 inch, price=60000Rs, usbSupport=false]]
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Memento_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


