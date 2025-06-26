
# 🏰 Abstract Factory Pattern: Enchanted Maze Example (JavaScript, GoF Style)

This project is a complete JavaScript implementation of the **Abstract Factory** pattern, inspired by the *MazeFactory* example from the GoF book (*Design Patterns: Elements of Reusable Object-Oriented Software*).

It demonstrates how to build a family of related maze components (rooms, doors, walls) using a factory interface. In this example, we use an **EnchantedMazeFactory** to create magical rooms, enchanted walls, and spellbound doors.

---

## 📁 Project Structure

```

AbstractFactory.js
Maze.js
Room.js
Wall.js
Door.js
EnchantedRoom.js
EnchantedWall.js
EnchantedDoor.js
EnchantedMazeFactory.js
MazeGame.js
index.js

````

---

## 🧱 Core Abstract Components

### `AbstractFactory.js`

```javascript
class MazeFactory {
    makeMaze() {
        throw new Error("makeMaze() must be implemented.");
    }
    makeWall() {
        throw new Error("makeWall() must be implemented.");
    }
    makeRoom(number) {
        throw new Error("makeRoom(number) must be implemented.");
    }
    makeDoor(room1, room2) {
        throw new Error("makeDoor(room1, room2) must be implemented.");
    }
}
module.exports = MazeFactory;
````

---

### `Maze.js`

```javascript
class Maze {
    constructor() {
        this.rooms = [];
    }
    addRoom(room) {
        this.rooms.push(room);
    }
    toString() {
        return `Maze with rooms: ${this.rooms.map(r => r.toString()).join(", ")}`;
    }
}
module.exports = Maze;
```

---

### `Room.js`

```javascript
class Room {
    constructor(number) {
        this.number = number;
    }
    toString() {
        return `Room #${this.number}`;
    }
}
module.exports = Room;
```

---

### `Wall.js`

```javascript
class Wall {
    toString() {
        return "Wall";
    }
}
module.exports = Wall;
```

---

### `Door.js`

```javascript
class Door {
    constructor(room1, room2) {
        this.room1 = room1;
        this.room2 = room2;
    }
    toString() {
        return `Door between Room ${this.room1.number} and Room ${this.room2.number}`;
    }
}
module.exports = Door;
```

---

## ✨ Enchanted Variants

### `EnchantedRoom.js`

```javascript
const Room = require('./Room');

class EnchantedRoom extends Room {
    constructor(number, spell) {
        super(number);
        this.spell = spell;
    }
    toString() {
        return `Enchanted Room #${this.number} [Spell: ${this.spell}]`;
    }
}
module.exports = EnchantedRoom;
```

---

### `EnchantedWall.js`

```javascript
const Wall = require('./Wall');

class EnchantedWall extends Wall {
    toString() {
        return "Enchanted Wall with sparkles";
    }
}
module.exports = EnchantedWall;
```

---

### `EnchantedDoor.js`

```javascript
const Door = require('./Door');

class EnchantedDoor extends Door {
    toString() {
        return `Enchanted Door between Room ${this.room1.number} and Room ${this.room2.number}`;
    }
}
module.exports = EnchantedDoor;
```

---

### `EnchantedMazeFactory.js`

```javascript
const MazeFactory = require('./AbstractFactory');
const Maze = require('./Maze');
const EnchantedRoom = require('./EnchantedRoom');
const EnchantedWall = require('./EnchantedWall');
const EnchantedDoor = require('./EnchantedDoor');

class EnchantedMazeFactory extends MazeFactory {
    makeMaze() {
        return new Maze();
    }
    makeWall() {
        return new EnchantedWall();
    }
    makeRoom(number) {
        return new EnchantedRoom(number, this.castSpell());
    }
    makeDoor(room1, room2) {
        return new EnchantedDoor(room1, room2);
    }
    castSpell() {
        return "Alohomora"; // Example spell
    }
}
module.exports = EnchantedMazeFactory;
```

---

## 🧠 Maze Assembly Logic

### `MazeGame.js`

```javascript
class MazeGame {
    createMaze(factory) {
        const maze = factory.makeMaze();
        const room1 = factory.makeRoom(1);
        const room2 = factory.makeRoom(2);
        const door = factory.makeDoor(room1, room2);
        const wall1 = factory.makeWall();
        const wall2 = factory.makeWall();

        maze.addRoom(room1);
        maze.addRoom(room2);

        console.log(room1.toString());
        console.log(room2.toString());
        console.log(door.toString());
        console.log(wall1.toString());
        console.log(wall2.toString());

        return maze;
    }
}
module.exports = MazeGame;
```

---

## 🚀 Entry Point

### `index.js`

```javascript
const EnchantedMazeFactory = require('./EnchantedMazeFactory');
const MazeGame = require('./MazeGame');

const factory = new EnchantedMazeFactory();
const game = new MazeGame();
const maze = game.createMaze(factory);

console.log(maze.toString());
```

---

## 🧪 Sample Output

```bash
Enchanted Room #1 [Spell: Alohomora]
Enchanted Room #2 [Spell: Alohomora]
Enchanted Door between Room 1 and Room 2
Enchanted Wall with sparkles
Enchanted Wall with sparkles
Maze with rooms: Enchanted Room #1 [Spell: Alohomora], Enchanted Room #2 [Spell: Alohomora]
```

---

## ✅ Run the Project

```bash
node index.js
```

Make sure all files are in the same directory or use `require` paths properly if you organize them into folders.

---

## 📚 Reference

* GoF Book: *Design Patterns: Elements of Reusable Object-Oriented Software*
* Pattern: Abstract Factory (Enchanted Maze example)

```


