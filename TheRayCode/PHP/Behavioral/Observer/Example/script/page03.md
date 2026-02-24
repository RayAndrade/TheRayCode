[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Subject.php** - The subject interface.

This is the subject interface that all concrete subjects need to implement.

```
Subject
```

The **Subject** requiers the following methods:

1. `attach`
2. `detach` and
3. `notify`

```
public function attach(Observer $observer);
public function detach(Observer $observer);
public function notify();
```


[page 4](./page04.md)
