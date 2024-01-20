[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

create **ConcreteAggregate**  AGGREGATE

```
ConcreteAggregate
```
and it
```
 implements Aggregate
```
so we shoud

```
require_once('Aggregate.php');
require_once('ConcreteIterator.php');
```
auto generate **createIterator**

At the top we add
```
private $items = array();

public function addItem($item) {
    $this->items[] = $item;
}
```
add code to  **createIterator**
```
return new ConcreteIterator($this);
```
and for **getItem** & **getCount**
```
public function getItem($index) {
    return $this->items[$index];
}

public function getCount() {
    return count($this->items);
}
```




[page 5](./page05.md)

