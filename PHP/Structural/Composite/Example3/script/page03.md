[home](./page01.md)

[back](./page02.md)


**at index.php**

**1:**
```
include_once 'Light.php';
include_once 'LightString.php';
```

**2:**
```
$redLight = new Light('red');
$greenLight = new Light('green');
$blueLight = new Light('blue');
```

**3:**
```
$firstString = new LightString();
$firstString->addLight($redLight);
$firstString->addLight($greenLight);
```

**4:**
```
$secondString = new LightString();
$secondString->addLight($blueLight);
$secondString->addLight($firstString);
```
Demonstrating composition by adding firstString into secondString

**5:5**
```
echo "Christmas Tree Lights: " . $secondString->shine();
```



[page 4](./page04.md)
