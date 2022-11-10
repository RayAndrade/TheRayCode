[back](./page06.md)


Now we go to the **FactoryMain** class Clear out any imports

```java

import systems.OperatingSytemFactory;

```

and

```java

OperatingSytemFactory osf = new OperatingSytemFactory();
osf.getInstance("Android").spec();
osf.getInstance("IOS").spec();
osf.getInstance("any other").spec();

```
Our output shoud be

The Ray Code supports Android
The Ray Code supports IOS
Windows is proprietary software



[page 8](./page08.md)
