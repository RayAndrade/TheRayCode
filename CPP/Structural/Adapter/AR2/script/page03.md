[home](./page01.md)

[back](./page02.md)


Create **DispayAdapter** class

```
DispayAdapter
```

it is extended with

```
 : public LocalDisplay, public RemoteDisplay
```

```
virtual void Message(Color color, std::string message) {  };
```

add a switch

```
switch(color)
{
    case Red:
        MsgRed(message);
        break;
    case Blue:
        MsgBlue (message);
        break;
    case Green:
        MsgGreen (message);
        break;
    case Yellow:
        MsgYellow (message);
        break;
    default:
        std::cout << "Error: Message format not supported" << std::endl;
        break;
}
```


[page 4](./page04.md)
