[home](./page01.md)

The Builder design pattern is used when there is a need to construct complex objects step by step. 

It separates the construction of an object from its representation. 

By doing this, the same construction process can create different representations.

Here, we'll use the Builder design pattern to construct a **Monster** object.

Let's break it down into different .cs files:

we start with

**IMonster** is the **interface** that outlines necessary steps for building a **Monster** object.

```
IMonster
```


```
void SetName(string name);
void SetCatchPhase(string phrase);
void SetHeadType(string type);
```
And to get the Monster

```
Monster GetMonster();
```

[page 2](./page02.md)
