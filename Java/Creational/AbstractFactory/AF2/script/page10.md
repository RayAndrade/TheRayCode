[back](./page09.md)

We do the same for a **MobileFactory**

```java
public class MobileFactory extends AbstractDeviceFactory{

    @Override
    Device getGaget(DeviceType deviceType) {
        switch (deviceType) {
            case ONEPLUS -> new OnePlus("8gb","qualcomm");
            case NOKIA -> new Nokia("12gb","Intel");
        }
        return null;
    }
}
```

[page 11](./page11.md)
