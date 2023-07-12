[home](./page01.md)

The Builder design pattern is used when there is a need to construct complex objects step by step. 

It separates the construction of an object from its representation. 

By doing this, the same construction process can create different representations.

Here, we'll use the Builder design pattern to construct a 'monster' object.

Let's break it down into different .cs files:

**IBuilder** is the **interface** that outlines necessary steps for building a complex object.

```
IMonster
```


```
void SetName(string name);
void SetSpeach(string bodyType);
void SetHairColor(string color);
Monster GetMonster();
```

[page 2](./page02.md)
