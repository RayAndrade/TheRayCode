
# 🧱 Builder Design Pattern – Maze Example (JavaScript)

This project is a faithful JavaScript implementation of the **Builder Pattern** as described in the GoF book (*Design Patterns: Elements of Reusable Object-Oriented Software*, p. 97). It demonstrates how to separate the construction of a complex object (`Maze`) from its representation, using a `Director` and a `ConcreteBuilder`.

---

## 📂 Project Structure

```

BuilderPatternMaze/
├── Door.js
├── Maze.js
├── MazeBuilder.js
├── MazeGame.js
├── Room.js
├── StandardMazeBuilder.js
└── index.js

````

---

## 🧩 Class Descriptions and Code

---

### 🧱 `Maze.js`

**Purpose**: Represents the final `Maze` object under construction. It contains a collection of rooms and a method to describe itself.

```javascript
// Maze.js
class Maze {
    constructor() {
        this.rooms = []; // Holds Room instances
    }

    addRoom(room) {
        this.rooms.push(room); // Add room to maze
    }

    toString() {
        return `Maze with rooms: ${this.rooms.map(r => r.toString()).join(', ')}`;
    }
}
module.exports = Maze;
````

---

### 🚪 `Door.js`

**Purpose**: Represents a door between two `Room` instances. It’s a part of the final maze structure but not stored in the maze itself for simplicity.

```javascript
// Door.js
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

### 🛏️ `Room.js`

**Purpose**: A single room in the maze, identified by a number. It is the atomic element that the maze is built from.

```javascript
// Room.js
class Room {
    constructor(number) {
        this.number = number; // Assign room number
    }

    toString() {
        return `Room #${this.number}`;
    }
}
module.exports = Room;
```

---

### 🏗️ `MazeBuilder.js`

**Purpose**: Defines the abstract interface for building parts of a maze. All concrete builders must implement these methods.

```javascript
// MazeBuilder.js
class MazeBuilder {
    buildMaze() {}             // Start new maze
    buildRoom(roomNumber) {}   // Add room
    buildDoor(roomFrom, roomTo) {} // Connect rooms
    getMaze() {}               // Return the built maze
}
module.exports = MazeBuilder;
```

---

### 🧰 `StandardMazeBuilder.js`

**Purpose**: A concrete implementation of `MazeBuilder` that builds a maze step by step, storing the result internally.

```javascript
// StandardMazeBuilder.js
const Maze = require('./Maze');
const Room = require('./Room');
const Door = require('./Door');
const MazeBuilder = require('./MazeBuilder');

class StandardMazeBuilder extends MazeBuilder {
    constructor() {
        super();
        this.currentMaze = null; // Holds the maze being built
    }

    buildMaze() {
        this.currentMaze = new Maze(); // Create a new Maze
    }

    buildRoom(number) {
        if (!this.currentMaze) return;
        const room = new Room(number); // Create and add Room
        this.currentMaze.addRoom(room);
    }

    buildDoor(from, to) {
        const room1 = this.currentMaze.rooms.find(r => r.number === from);
        const room2 = this.currentMaze.rooms.find(r => r.number === to);
        if (room1 && room2) {
            const door = new Door(room1, room2);
            console.log(door.toString()); // Log door for demo
        }
    }

    getMaze() {
        return this.currentMaze; // Return built maze
    }
}
module.exports = StandardMazeBuilder;
```

---

### 🎮 `MazeGame.js`

**Purpose**: Acts as the **Director** in the Builder pattern. It defines the sequence of building steps, but doesn't know the internal details of how the maze is built.

```javascript
// MazeGame.js
class MazeGame {
    createMaze(builder) {
        builder.buildMaze();
        builder.buildRoom(1);
        builder.buildRoom(2);
        builder.buildDoor(1, 2);
        return builder.getMaze(); // Return fully built maze
    }
}
module.exports = MazeGame;
```

---

### 🚀 `index.js`

**Purpose**: Entry point for the program. It assembles the builder and director, triggers the building process, and outputs the result.

```javascript
// index.js
const MazeGame = require('./MazeGame');
const StandardMazeBuilder = require('./StandardMazeBuilder');

const builder = new StandardMazeBuilder(); // Create builder
const game = new MazeGame();               // Create director
const maze = game.createMaze(builder);     // Construct maze

console.log(maze.toString());              // → Maze with rooms: Room #1, Room #2
```

---

## ✅ Output

```bash
Door between Room 1 and Room 2
Maze with rooms: Room #1, Room #2
```

---

## 🧪 How to Run

1. Make sure all `.js` files are in the same directory.
2. Open a terminal and run:

```bash
node index.js
```

---

## 📚 Reference

* *Design Patterns: Elements of Reusable Object-Oriented Software*, GoF — Page 97
* Pattern: **Builder** (Creational)

---

## 🧠 Teaching Tip

* You can expand this example by storing doors inside the `Maze`, or even adding walls.
* Try replacing `StandardMazeBuilder` with another builder that constructs a **complex enchanted maze**, just like in the Abstract Factory pattern.


