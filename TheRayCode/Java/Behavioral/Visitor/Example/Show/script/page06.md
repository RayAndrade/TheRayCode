[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

These classes represent different types of elements in a document. Each has a unique property (text for **TextElement** and imageName for **ImageElement**) and implements the accept method to **allow a visitor to visit it**.

Let's create the **Visitor.java** the Interface

```
Visitor
```

we add
```
void visit(TextElement textElement);
void visit(ImageElement imageElement);
```

This interface declares a visit method for each type of element. Concrete visitors will implement this interface to perform specific actions on each element type.


[page 7](./page07.md)
