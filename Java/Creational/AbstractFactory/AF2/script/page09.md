[back](./page08.md)

Next we create a **LabtopFactory** which extends **AbstractDeviceFactory** and we override the **getGaget**

```java

public class LabtopFactory extends AbstractDeviceFactory{

    @Override
    Device getGaget(DeviceType deviceType) {
        switch (deviceType) {
            case HP -> new Hp("8gb","Intel", "Nvidia" );
            case DELL -> new Hp("12gb","AMD", "Nvidia" );
        }
        return null;
    }
}


```

[page 10](./page10.md)
