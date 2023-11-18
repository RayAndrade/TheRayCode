[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

At **Program.cs**


add:
```
Device tv = new TV();
RemoteControl remote = new RemoteControl(tv);

remote.TogglePower(); // Turns TV on
remote.VolumeUp(); // Increases volume

Console.WriteLine("TV Status: " + (tv.IsEnabled() ? "On" : "Off"));
Console.WriteLine("TV Volume: " + tv.GetVolume());
```

[page 7](./page07.md)
