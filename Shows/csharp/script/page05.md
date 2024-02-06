[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Now we goto to **Program**

in main I put
```
Originator originator = new Originator();
Caretaker caretaker = new Caretaker();

        // Changing and saving states
originator.SetState("State #1");
caretaker.Add(originator.SaveStateToMemento());

originator.SetState("State #2");
caretaker.Add(originator.SaveStateToMemento());

originator.SetState("State #3");
caretaker.Add(originator.SaveStateToMemento());

originator.SetState("State #4");
Console.WriteLine("Current State: " + originator.GetState());

        // Restoring previous states
originator.GetStateFromMemento(caretaker.Get(0));
Console.WriteLine("First saved State: " + originator.GetState());
originator.GetStateFromMemento(caretaker.Get(1));
Console.WriteLine("Second saved State: " + originator.GetState());
}
```

[page 6](./page06.md)
