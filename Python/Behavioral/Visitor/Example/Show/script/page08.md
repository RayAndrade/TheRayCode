[home](./page01.md) | [back](./page07.md) | [next](./page09.md)

now at the **main**

for **Text**
```
Element[] elements = new Element[]{
        new TextElement("Hello"),
        new ImageElement("world.jpg")
};
```

for **ElementPrinter**
```
ElementPrinter printer = new ElementPrinter();
for (Element element : elements) {
     element.accept(printer);
}
```

[page 9](./page09.md)
