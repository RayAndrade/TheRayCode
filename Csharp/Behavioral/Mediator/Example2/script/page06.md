[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Let's put this all together in **Program.cs** the **Main** method
```
DramaQueen queen = new DramaQueen();
MemoryBank bank = new MemoryBank();
```

```
            // New dramas and saving them
queen.NewDrama("Forgot my keys at Starbucks!");
bank.DepositDrama(queen.SaveDramaForLater());
```

```
queen.NewDrama("Lost a shoe in the rain!");
bank.DepositDrama(queen.SaveDramaForLater());
```

```
queen.NewDrama("Burned the cookies!");
bank.DepositDrama(queen.SaveDramaForLater());
```


```
queen.NewDrama("Spilled tea on my diary!");
Console.WriteLine("Latest Drama: " + queen.CurrentDrama());
```

```
            // Reminiscing old dramas
queen.ReminisceDrama(bank.WithdrawDrama(0));
Console.WriteLine("Oh, remember this? " + queen.CurrentDrama());
queen.ReminisceDrama(bank.WithdrawDrama(1));
Console.WriteLine("And this one! " + queen.CurrentDrama());
```


[page 7](./page07.md)
