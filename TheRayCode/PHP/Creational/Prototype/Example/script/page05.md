[home](./page01.md)

[back](./page04.md)

In the index.php file, we first create an instance of the Clown class named bozoClown. 

Then we create a shallow clone (bozoShallowClone) and a deep clone (bozoDeepClone) of this object.

```
include 'Clown.php';
include 'Phrase.php';

$bozoClown = new Clown("Bozo", new Phrase("Merry Christmas"));
```

```
$bozoShallowClone = clone $bozoClown;
$KrampusKlown = $bozoClown->deepClone();

// Let's change the Prase of ORIGINAL bozoClown
$bozoClown->chatchPrase->phrase = "WHOA NELLY";

echo "Original Bozo Clown chatch Prase: " . $bozoClown->chatchPrase->phrase . "<br/>\n"; // WHOA NELLY
```


We then change the color of the phrase property on the original bozoClown. 

```
echo "Shallow Bozo Clone phrase: " . $bozoShallowClone->chatchPrase->phrase . "<br/>\n"; // WHOA NELLY
echo "Deep Krampus Clone phase: " . $KrampusKlown->chatchPrase->phrase . "<br/>\n"; // Merry Christmas
```

After that, we print the color of the nose property for the original, the shallow clone, and the deep clone.

Because the shallow clone only copied the reference to the Nose object, 
when we change the the phrase in the original bozoClown, it is also changed in the bozoShallowClone (they both point to the same Phrase object).

However, in the deep clone, we manually cloned the Phrase object as well, so bozoDeepClone has its own Phrase object, and changes to the original bozoClown's phrase do not affect it.

[page 6](./page06.md)
