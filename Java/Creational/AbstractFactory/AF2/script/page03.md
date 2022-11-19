[back](./page02.md)

file name

Next we create the *Dell class* and extend it with **Device**

```java
public class Dell extends Device{

}
```

we override the **getDetails** method.

```java

@Override
public String toString(){
    return "Dell{" +
            "ram='" + ram + '\'' + ", processor='" + processor + '\'' +
            ", gpuType='" + gpu + '\'' + '}';
}
```

we add some private variables

```java

 private String ram;
private String processor;
private String gpu;

```

We create the constructer

```java

public Dell (String ramSize, String processorType, String gpuType){
    this.ram =ramSize;
    this.processor=processorType;
    this.gpu =gpuType;
 }

```

add we add code to **getDetails**

```java

    @Override

    public String getDetails() {

        return "Dell config is ram size " + this.ram + " and processor type is " + this.processor;

    }

```


[page 4](./page04.md)
