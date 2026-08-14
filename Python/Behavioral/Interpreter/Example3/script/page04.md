[home](./page01.md) | [back](./page03.md) | [next](./page05.md)


Create **class**
```
CleanRoomExpression
```
it **implements**
```
 implements Expression
```
add the **interpret** method

at the top we add
```
private String action;

public CleanRoomExpression(String action) {
    this.action = action;
}
```
for **interpret** we add
```
return context.getTranslation(action).equals("CLEAN_ROOM");
```


[page 5](./page05.md)
