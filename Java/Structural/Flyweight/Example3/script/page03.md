[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **class**
```
Style
```
add code:

**1**
```
private final boolean bold;
private final boolean italic;
private final int fontSize;
```

**2**
```
public Style(boolean bold, boolean italic, int fontSize) {
    this.bold = bold;
    this.italic = italic;
    this.fontSize = fontSize;
}
```
**3**
```
@Override
public String toString() {
    return "[Bold: " + bold + ", Italic: " + italic + ", Font size: " + fontSize + "]";
}
```

[page 4](./page04.md)
