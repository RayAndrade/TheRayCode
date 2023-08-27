[home](./page01.md)

[back](./page04.md)

we put it altogether in main

```
std::unique_ptr<LocalDisplay> displayPtr(new DispayAdapter);
displayPtr->Message(displayPtr->Red,"Cold Stone");
displayPtr->Message(displayPtr->Blue,"Earth Stone");
displayPtr->Message(displayPtr->Green,"Mars Stone");
displayPtr->Message(displayPtr->Yellow,"Yogi Stone");
```

[page 6](./page06.md)
