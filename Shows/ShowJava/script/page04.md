[home](./page01.md)

[back](./page03.md)

You can then create a Dessert object using the DessertBuilder class in your **main method** like so:

```
DessertBuilder builder = new DessertBuilder();
    Dessert applePie = builder.setName("Apple Pie")
                               .setSugar(100)
                               .setButter(50)
                               .setBaked(true)
                               .build();
    System.out.println(applePie);
```


[page 5](./page05.md)
