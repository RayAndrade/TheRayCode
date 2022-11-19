[back](./page10.md)

Class **FactoryGenerator** which will be a factory of factories

```java

public class FactoryGenerator {
    public static AbstractDeviceFactory getFactory(FactoryType factoryType){
            switch (factoryType){
                case LABTOFACTORY:
                    return new LabtopFactory();
                case MOBILFACTORY:
                    return new MobileFactory();
            }
            return null;

    }
}

```


[page 12](./page12.md)
