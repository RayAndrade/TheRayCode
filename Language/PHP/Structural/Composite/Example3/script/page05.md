[home](./page01.md) | [next page](page06.md) | [back](page04.md)

at **index.php**
```
require_once 'Performer.php';
require_once 'Comedian.php';
require_once 'ComedyTroupe.php';
```

// Solo comedians
```
$jerry = new Comedian("Jerry");
$elaine = new Comedian("Elaine");
```

// A comedy troupe
```
$funnyFolks = new ComedyTroupe();
$funnyFolks->add($jerry);
$funnyFolks->add($elaine);
```
// Another solo comedian
```
$kramer = new Comedian("Kramer");
```
// The big comedy troupe
```
$comedyFestival = new ComedyTroupe();
$comedyFestival->add($funnyFolks);
$comedyFestival->add($kramer);
```

end
```
echo $comedyFestival->perform();
```
