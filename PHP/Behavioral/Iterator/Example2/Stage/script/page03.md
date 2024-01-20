[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create ITERATOR
```
ConcreteIterator
```
witch
```
 implements Iterator
```
add at the top
```
private $items = array();

public function addItem($item) {
    $this->items[] = $item;
} 
```
**addItem** to the **items ARRAY**

for **createIterator**
```
return new ConcreteIterator($this);
```
let's **getItem** & **getCount**
```
public function getItem($index) {
    return $this->items[$index];
}

public function getCount() {
    return count($this->items);
}
```

[page 4](./page04.md)
