[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Cretate the **ImageElement.java** class

It
```
 implements Element
```

At the top we add:
```
private String imageName;
```
**2**
```
public ImageElement(String imageName) {
    this.imageName = imageName;
}
```
**3**
```
public String getImageName() {
    return imageName;
}
```
At the override
```
 visitor.visit(this);
```


[page 6](./page06.md)
