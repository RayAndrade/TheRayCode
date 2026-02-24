[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Let's put all these classes methods into one class the **RobotFacade**

```
RobotFacade
```
at the top:
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




[page 6](./page06.md)
