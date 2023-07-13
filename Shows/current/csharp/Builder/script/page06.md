[home](./page01.md)

[back](./page05.md)

At **Program**

```
DrFrankenstein drFrank = new DrFrankenstein();
MonsterBuilder igor = new MonsterBuilder();
        
            // Director uses the builder to construct the object
drFrank.Construct(igor);
        
Monster monster = igor.GetMonster();
        
monster.Describe();
```
[page 7](./page07.md)
