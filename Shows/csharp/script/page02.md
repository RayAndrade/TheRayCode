[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Create **class**
```
RobotFacade
```

add code:
**1**
```
private CookingSubsystem _cookingSubsystem;
private CleaningSubsystem _cleaningSubsystem;
private EntertainmentSubsystem _entertainmentSubsystem;
```
**2**
```
public RobotFacade()
{
    _cookingSubsystem = new CookingSubsystem();
    _cleaningSubsystem = new CleaningSubsystem();
    _entertainmentSubsystem = new EntertainmentSubsystem();
}
```
**3**
```
public void PerformMorningRoutine()
{
    _cookingSubsystem.MakeCoffee();
    _cleaningSubsystem.DoDusting();
    _entertainmentSubsystem.PlayMorningMusic();
}
```

Additional methods for different routines...


[page 3](./page03.md)
