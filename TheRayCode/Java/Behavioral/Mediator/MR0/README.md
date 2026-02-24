# TheRayCode
## Mediator pattern java

The Mediator design pattern is used to handle communication between related ojects called **Colleagues**.
All communication is handled by the **Mediator** and the **Colleagues** don't need to know anything about each other.

We start by creating an interface called **Mediator**.
```java
public interface Mediator {
    public void saleOffer(String stock, int shares, int collCode);
    public void buyOffer(String stock, int shares, int collCode);
    public void addColleague(Colleague colleague);
}
```
We create an abstract class for the **Colleague**s.
Notice you can create a new instance of a **Colleague**.
```java
public abstract class Colleague {
    private Mediator mediator;
    private int colleagueCode;
    public Colleague(Mediator newMediator){
        mediator = newMediator;
        mediator.addColleague(this);
    }
    public void saleOffer(String stock, int shares){
        mediator.saleOffer(stock, shares, this.colleagueCode);
    }
    public void buyOffer(String stock, int shares){
        mediator.buyOffer(stock, shares, this.colleagueCode);
    }
    public void setCollCode(int collCode)
    { 
    	colleagueCode = collCode; 
    }
}
```
Provides infor information about the number of shares, the stock symbol and a varable to tie all these  colleagues together.
We also add methods that will do actions like getstockShares, getStockSymbol and the colleagueCode.
```java
public class StockOffer {
    private int stockShares = 0;
    private String stockSymbol = "";
    private int colleagueCode = 0;

    public StockOffer(int numOfShares, String stock, int collCode){

        stockShares = numOfShares;
        stockSymbol = stock;
        colleagueCode = collCode;

    }

    public int getstockShares() { return stockShares; }
    public String getStockSymbol() { return stockSymbol; }
    public int getCollCode() { return colleagueCode; }
}
```
Let's create a colleague class we call **GormanSlacks**.
This class will be extended with **Colleague**.

```java
public class GormanSlacks extends Colleague{
    public GormanSlacks(Mediator newMediator) {
        super(newMediator);
        System.out.println("Gorman Slacks signed up with the stockexchange\n");
    }
}
```

Let create a class that will be simular to **GormanSlacks** we call this class **JTPoorman**.
```java
public class JTPoorman extends Colleague{
    public JTPoorman(Mediator newMediator) {
        super(newMediator);
        System.out.println("JT Poorman signed up with the stockexchange\n");
    }
}
```
Let's create a class called the **StockMediator**.


```java
import java.util.ArrayList;

public class StockMediator implements Mediator{
    private ArrayList<Colleague> colleagues;
    private ArrayList<StockOffer> stockBuyOffers;
    private ArrayList<StockOffer> stockSaleOffers;
    private int colleagueCodes = 0;
    public StockMediator(){
        colleagues = new ArrayList<Colleague>();
        stockBuyOffers = new ArrayList<StockOffer>();
        stockSaleOffers = new ArrayList<StockOffer>();
    }
    public void addColleague(Colleague newColleague){
        colleagues.add(newColleague);
        colleagueCodes++;
        newColleague.setCollCode(colleagueCodes);
    }
    public void saleOffer(String stock, int shares, int collCode) {
        boolean stockSold = false;
        for(StockOffer offer: stockBuyOffers){
            if((offer.getStockSymbol() == stock) && (offer.getstockShares() == shares)){
                System.out.println(shares + " shares of " + stock +
                        " sold to colleague code " + offer.getCollCode());
                stockBuyOffers.remove(offer);
                stockSold = true;
            }
            if(stockSold){ break; }
        }
        if(!stockSold) {
            System.out.println(shares + " shares of " + stock +
                    " added to inventory");
            StockOffer newOffering = new StockOffer(shares, stock, collCode);
            stockSaleOffers.add(newOffering);
        }
    }
    @Override
    public void buyOffer(String stock, int shares, int collCode) {
        boolean stockBought = false;
        for(StockOffer offer: stockSaleOffers){
            if((offer.getStockSymbol() == stock) && (offer.getstockShares() == shares)){
                System.out.println(shares + " shares of " + stock +
                        " bought by colleague code " + offer.getCollCode());
                stockSaleOffers.remove(offer);
                stockBought = true;
            }
            if(stockBought){ break; }
        }
        if(!stockBought) {
            System.out.println(shares + " shares of " + stock +
                    " added to inventory");
            StockOffer newOffering = new StockOffer(shares, stock, collCode);
            stockBuyOffers.add(newOffering);
        }
    }
    public void getstockOfferings(){
        System.out.println("\nStocks for Sale");
        for(StockOffer offer: stockSaleOffers){
            System.out.println(offer.getstockShares() + " of " + offer.getStockSymbol());
        }
        System.out.println("\nStock Buy Offers");
        for(StockOffer offer: stockBuyOffers){
            System.out.println(offer.getstockShares() + " of " + offer.getStockSymbol());
        }
    }
}
```
Now let's put this altogether in a main method we put in a class we call **TestStockMediator**.
```java
public class TestStockMediator {
    public static void main(String[] args){
        StockMediator nyse = new StockMediator();
        GormanSlacks broker = new GormanSlacks(nyse);
        JTPoorman broker2 = new JTPoorman(nyse);
        broker.saleOffer("MSFT", 100);
        broker.saleOffer("GOOG", 50);
        broker2.buyOffer("MSFT", 100);
        broker2.saleOffer("NRG", 10);
        broker.buyOffer("NRG", 10);
        nyse.getstockOfferings();
    }
}
```

Let's comile and run this.
We should get:
```run
Gorman Slacks signed up with the stockexchange

JT Poorman signed up with the stockexchange

100 shares of MSFT added to inventory
50 shares of GOOG added to inventory
100 shares of MSFT bought by colleague code 1
10 shares of NRG added to inventory
10 shares of NRG bought by colleague code 2

Stocks for Sale
50 of GOOG

Stock Buy Offers
```

The Ray Code is AWESOME!!!

[Wikipedia](https://en.wikipedia.org/wiki/Mediator_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)
