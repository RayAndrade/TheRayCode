# TheRayCode is AWESOME!!!

**Behavoiral Patterns section**

**[Top](../README.md)** 

**[Creational Patterns](../Creational/README.md)** * **[Structural Patterns](../Structural/README.md)** * **[Behavioral Patterns](../Behavioral/README.md)**

# JavaScript Behavioral Design Patterns | TheRayCode

Imagine you're building a browser game. Pressing a key moves your player, collecting a coin updates the scoreboard, and picking up a power-up changes how your player jumps. How do you organize the code so each part knows what to do?

**Behavioral design patterns** give you ways to organize how objects and functions share jobs, send messages, and respond to changes. These 11 Gang of Four patterns are easier to learn when you start with a problem you can picture. All the lessons can be practiced in plain JavaScript. Frameworks appear as examples of where you might see similar ideas.

## [Chain of Responsibility](./ChainOfResponsibility/README.md)

Pass a request through a series of handlers. Each handler decides whether to handle it or pass it along.

**Picture it.** A game chat command goes to the help handler first, then the settings handler. If neither recognizes it, a fallback displays “Unknown command.”

**Try it in JavaScript.** Give each handler a `handle(request)` method and a reference to the next handler. Call the first handler to start the chain. Express middleware gives you a similar example of passing work along with `next()`.

## [Command](./Command/README.md)

Wrap an action in an object so you can run it later, put it in a queue, or keep it in a history.

**Picture it.** A drawing app stores each brushstroke as a command. When you click Undo, the app asks the most recent command to reverse its action.

**Try it in JavaScript.** Create command objects with an `execute()` method. For reversible actions, add `undo()` and keep the commands you've run in an array.

## [Interpreter](./Interpreter/README.md)

Represent the rules of a small language with objects that know how to evaluate expressions.

**Picture it.** A game lets you write a score rule like `coins + bonus`. The interpreter looks up the two values and adds them.

**Try it in JavaScript.** Build the expression from two variable objects and an addition object. Give each an `interpret(context)` method. The variables look up their values in `context`, and the addition object combines the results.

## [Iterator](./Iterator/README.md)

Visit the items in a collection one at a time through a consistent interface.

**Picture it.** A playlist lets you go through your songs in order. The code that plays the songs can use the same loop even if the playlist changes how it stores them.

**Try it in JavaScript.** Start with `for...of` on an array. Then make a custom playlist iterable by adding a `*[Symbol.iterator]()` generator method that uses `yield` to hand back one song at a time.

## [Mediator](./Mediator/README.md)

Give one object the job of coordinating how several other objects work together.

**Picture it.** In a character setup screen, a name field and an avatar picker report changes to a dialog controller. The controller enables Start when you have entered a name and picked an avatar.

**Try it in JavaScript.** Let each control call `dialog.changed(control)`. Put the rules for updating the other controls inside the dialog controller.

## [Memento](./Memento/README.md)

Save a snapshot of an object's state so the object can restore it later. The code that stores the snapshot can treat it as a sealed package.

**Picture it.** A puzzle game saves a checkpoint before a tricky move. If you get stuck, the board restores itself to the saved position.

**Try it in JavaScript.** Give the board `save()` and `restore(snapshot)` methods. Copy any nested board data that could change. Keep the snapshot in a history array and pass it back to the board when needed.

## [Observer](./Observer/README.md)

Let interested parts of your program subscribe to an object and get notified when something changes.

**Picture it.** When your score changes, the scoreboard displays the new number and the badge tracker checks for a new achievement.

**Try it in JavaScript.** Store listener functions in a `Set`. When the score changes, call each listener with the updated score. Let a listener unsubscribe when it no longer needs updates. Browser event listeners are a familiar example of the same idea.

## [State](./State/README.md)

Let an object respond differently to the same action depending on its current state.

**Picture it.** Pressing Start on a game menu begins the game. Pressing the same button during play pauses it. Pressing it again resumes play.

**Try it in JavaScript.** Create menu, playing, and paused state objects with a shared method name such as `pressStart(game)`. The game calls that method on its current state, which can also tell the game to switch states.

## [Strategy](./Strategy/README.md)

Give your program interchangeable ways to do the same job.

**Picture it.** A leaderboard can sort players by score, fastest finish, or name. Each choice uses a different comparison rule.

**Try it in JavaScript.** Write a comparison function for each sort order. Pass the function the player chooses to `Array.prototype.sort()`.

## [Template Method](./Template/README.md)

Define the order of a process in a base class and let subclasses customize selected steps.

**Picture it.** Every quiz starts, asks a question, checks the answer, and shows feedback. A math quiz and a vocabulary quiz follow the same sequence and check answers in different ways.

**Try it in JavaScript.** Put the sequence in a base class method called `run()`. Use `extends` to create quiz subclasses that supply their own `askQuestion()` and `checkAnswer()` methods.

## [Visitor](./Visitor/README.md)

Put an operation in a visitor object so it can do different work for each kind of element it visits. You can add another operation by writing another visitor.

**Picture it.** A game map contains coins, doors, and traps. One visitor counts loot. Another collects information to draw the map.

**Try it in JavaScript.** Give each map element an `accept(visitor)` method. A coin calls `visitor.visitCoin(this)`, and a door calls `visitor.visitDoor(this)`. Each visitor decides what to do with the element it receives.

## How the patterns connect

- **Observer and Mediator.** The score announces that it changed through Observer. The dialog controller decides how a change to one control should affect another through Mediator.
- **State and Strategy.** A game uses State to decide what Start does in its current mode. A leaderboard uses Strategy to apply the sort rule you choose.
- **Command and Memento.** A Command records an action you can run. A Memento captures a moment you can return to. A drawing app can use both to undo an edit by restoring the canvas snapshot saved before it.
- **Iterator and Visitor.** An Iterator supplies the next map element. A Visitor decides what work to do for each kind of element.

## JavaScript tools you'll use

- **Functions** let you pass behavior as a value. Try one as a Strategy or as an Observer listener.
- **Objects and classes** group related data and methods. You can use either for a Command or a State. Use a base class and subclasses to practice Template Method.
- **Generators and `for...of`** let you write and use custom iterators.
- **Private class fields** such as `#position` help an object control access to its own data. Pair them with save and restore methods when practicing Memento.

Try one pattern in a small project first. For example, start with a game score and two listeners. Add a point and see both listeners respond. Then unsubscribe one and predict what will happen when you add another point.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Instagram](https://www.instagram.com/The_Ray_Code/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
