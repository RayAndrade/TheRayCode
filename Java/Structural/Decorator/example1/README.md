Certainly! The Decorator pattern is used to add responsibilities to objects dynamically. In the context of the Starbuzz example from "Head First Design Patterns", let's say we have a basic coffee and we want to be able to add condiments like milk, sugar, and whipped cream dynamically. Here's a simple implementation using the Decorator pattern in Java:

1. **Abstract component class**: This represents the core component that can be decorated.

```java
public abstract class Beverage {
    String description = "Unknown Beverage";

    public String getDescription() {
        return description;
    }

    public abstract double cost();
}
```

2. **Concrete components**: These are the core items that can be decorated. 

```java
public class Espresso extends Beverage {
    
    public Espresso() {
        description = "Espresso";
    }

    public double cost() {
        return 1.99;
    }
}

public class HouseBlend extends Beverage {
    
    public HouseBlend() {
        description = "House Blend Coffee";
    }

    public double cost() {
        return 0.89;
    }
}
```

3. **Abstract decorator class**: This extends the Beverage class and will be the base for all concrete decorators.

```java
public abstract class CondimentDecorator extends Beverage {
    public abstract String getDescription();
}
```

4. **Concrete decorators**: These will add functionalities (or responsibilities) to the core components.

```java
public class Milk extends CondimentDecorator {
    Beverage beverage;

    public Milk(Beverage beverage) {
        this.beverage = beverage;
    }

    public String getDescription() {
        return beverage.getDescription() + ", Milk";
    }

    public double cost() {
        return 0.30 + beverage.cost();
    }
}

public class Sugar extends CondimentDecorator {
    Beverage beverage;

    public Sugar(Beverage beverage) {
        this.beverage = beverage;
    }

    public String getDescription() {
        return beverage.getDescription() + ", Sugar";
    }

    public double cost() {
        return 0.15 + beverage.cost();
    }
}

public class WhippedCream extends CondimentDecorator {
    Beverage beverage;

    public WhippedCream(Beverage beverage) {
        this.beverage = beverage;
    }

    public String getDescription() {
        return beverage.getDescription() + ", Whipped Cream";
    }

    public double cost() {
        return 0.35 + beverage.cost();
    }
}
```

5. **Using the pattern**:

```java
public class StarbuzzCoffee {

    public static void main(String args[]) {
        Beverage beverage = new Espresso();
        System.out.println(beverage.getDescription() + " $" + beverage.cost());

        Beverage beverage2 = new HouseBlend();
        beverage2 = new Milk(beverage2);
        beverage2 = new Sugar(beverage2);
        System.out.println(beverage2.getDescription() + " $" + beverage2.cost());

        Beverage beverage3 = new Espresso();
        beverage3 = new WhippedCream(beverage3);
        System.out.println(beverage3.getDescription() + " $" + beverage3.cost());
    }
}
```

In the code above, you can see that we're dynamically adding responsibilities (in this case, condiments and their costs) to our coffee objects. This allows for a high degree of flexibility and avoids creating a vast number of subclasses to handle every possible combination of condiments.
