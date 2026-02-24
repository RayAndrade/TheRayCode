[home](./page01.md) | [next page](page05.md) | [back](page03.md)

create **class**
```
ComedyTroupe
```
This is our composite class. It can contain individual comedians or other comedy troupes.
it **too** 
```
 implements Performer 
```
add  **perform**
to the top we add
```
private $performers = [];

public function add(Performer $performer) {
    $this->performers[] = $performer;
}
```
for **perform**
```
$performance = "Comedy Troupe starts performing:<br/>";
foreach ($this->performers as $performer) {
    $performance .= $performer->perform();
}
return $performance;
```
