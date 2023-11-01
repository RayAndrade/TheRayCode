[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

The concrete implementation of the subject.

```
ConcreteSubject
```

```
include 'Subject.php';
```

```
 implements Subject
```

Add local private varables
```
private $observers = [];
private $state;
```

for **attach**
```
$this->observers[] = $observer;
```


for **detach**

```
foreach ($this->observers as $key => $obs) {
if ($obs === $observer) {
    unset($this->observers[$key]);
  }
}
```

and for **notify**
```
foreach ($this->observers as $observer) {
    $observer->update($this->state);
}
```

we add a function to **setState**
```
public function setState($state) {
    $this->state = $state;
    $this->notify();
}
```




[page 5](./page05.md)
