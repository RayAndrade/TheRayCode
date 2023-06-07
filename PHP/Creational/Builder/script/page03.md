[home](./page01.md)

[back](./page02.md)


Finally, use the **SandwichBuilder** in your main PHP file (**index.php**):

We start with our includes
```
include 'Sandwich.php';
include 'SandwichBuilder.php';
```

```
$sandwichBuilder = new SandwichBuilder();

$sandwich = $sandwichBuilder->setBread("whole grain")
                        ->setMeat("turkey")
                        ->setCheese("swiss")
                        ->setVeggies("lettuce, tomato, onions")
                        ->build();

echo $sandwich;
```


[page 4](./page04.md)
