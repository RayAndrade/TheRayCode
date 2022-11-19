[back](./page06.md)

Now we create **AbstractDeviceFactory** which will also be an *abstract class*.

Which will have an **abstract** method that will return a **Device** and we pass into it *deviceType*
```java

public abstract class AbstractDeviceFactory {
    abstract Device getGaget(DeviceType deviceType);
}

```

[page 8](./page08.md)
