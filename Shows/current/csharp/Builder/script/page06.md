[home](./page01.md)

[back](./page05.md)

At **Program**

```
DirectorIgor directorIgor = new DirectorIgor();
MonsterBuilderDrFrank builderDrFrank = new MonsterBuilderDrFrank();
        
            // Director uses the builder to construct the object
directorIgor.Construct(builderDrFrank);
        
Monster monster = builderDrFrank.GetMonster();
        
monster.Describe();
```
[page 7](./page07.md)
