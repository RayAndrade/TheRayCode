[back](./page03.md)

We do the SAME and create **HP**

```java
public class Hp extends Device{
    private String ram;
    private String processor;
    private String gpu;

    public Hp (String ramSize, String processorType, String gpuType){
        this.ram =ramSize;
        this.processor=processorType;
        this.gpu=gpuType;
    }

    @Override
    public String getDetails() {
        return "Hp config is ram size " + this.ram + " and processor type is " + this.gpu + " and gpuType is " + this.gpu;
    }

    @Override
    public String toString(){
        return "Hp{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                '}';
    }
}
```

[page 5](./page05.md)
