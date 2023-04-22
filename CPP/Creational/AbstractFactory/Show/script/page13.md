[Home](page01.md)

[Back 12](page12.md)

SuperheroFactory**.cpp**

```
SuperheroFactory
```


```
Toy* SuperheroFactory::createActionFigure() {
    return new SuperheroActionFigure();
}

Toy* SuperheroFactory::createPlushToy() {
    return new SuperheroPlushToy();
}
```


Note that the SuperheroActionFigure, SuperheroPlushToy, AnimalActionFigure, and AnimalPlushToy classes are concrete implementations of the ActionFigure and PlushToy classes, respectively. The SuperheroFactory and AnimalFactory classes are concrete implementations of the ToyFactory class. They provide methods to create the concrete implementations of ActionFigure and PlushToy classes. This way, client code can create toys without having to know about the specific implementation details of each toy.


[Next 14](page14.md)
