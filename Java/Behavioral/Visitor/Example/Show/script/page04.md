[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

Let's breate
```
TextElement
```
which 
```
 implements Element
```

at the top we add
```
private String text;
```
**2**
```
public TextElement(String text) {
    this.text = text;
}
```
**3**
```
public String getText() {
    return text;
}
```

for the override
```
visitor.visit(this);
```
 


[page 5](./page05.md)
