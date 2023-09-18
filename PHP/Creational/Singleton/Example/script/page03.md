[home](./page01.md)

[back](./page02.md)


Create the 

```
SomeClass
```


```
class SomeClass {  }
```

add

```
private $singleton;
```

```
public function __construct() {
    $this->singleton = Singleton::getInstance();
}
```

```
public function doSomething() {
   echo "Using the Singleton instance within SomeClass!";
}
```



[page 4](./page04.md)
