# 🧬 Prototype Pattern – Maze Example (JavaScript)

## 🧱 Class Breakdown

---

### 🏗️ MazePrototypeFactory.js

**Purpose**:  
This factory builds maze components by cloning existing prototype objects instead of instantiating new ones. It ensures all parts are created uniformly.

```javascript
// MazePrototypeFactory.js
class MazePrototypeFactory {
    constructor(maze, wall, room, door) {
        this._prototypeMaze = maze;   // Stores prototype Maze
        this._prototypeWall = wall;   // Stores prototype Wall
        this._prototypeRoom = room;   // Stores prototype Room
        this._prototypeDoor = door;   // Stores prototype Door
    }

    makeMaze() {
        return this._prototypeMaze.clone();  // Return a cloned Maze
    }

    makeWall() {
        return this._prototypeWall.clone();  // Return a cloned Wall
    }

    makeRoom(number) {
        const room = this._prototypeRoom.clone(); // Clone prototype Room
        room.setNumber(number); // Assign room number after cloning
        return room;
    }

    makeDoor(r1, r2) {
        const door = this._prototypeDoor.clone(); // Clone prototype Door
        door.initialize(r1, r2); // Set connections between rooms
        return door;
    }
}
module.exports = MazePrototypeFactory;
````

---

### 🧱 Maze.js

**Purpose**:
Represents the entire maze. It contains rooms and provides a method to clone itself.

```javascript
// Maze.js
class Maze {
    constructor() {
        this.rooms = []; // Initialize empty room list
    }

    addRoom(room) {
        this.rooms.push(room); // Add a room to the maze
    }

    clone() {
        return new Maze(); // Return a new empty Maze
    }

    toString() {
        return `Maze with rooms: ${this.rooms.map(r => r.toString()).join(", ")}`;
    }
}
module.exports = Maze;
```

---

### 🧱 Wall.js

**Purpose**:
Represents a simple wall. Has a basic clone method and no internal state.

```javascript
// Wall.js
class Wall {
    clone() {
        return new Wall(); // Return a new Wall
    }

    toString() {
        return "Wall"; // String label
    }
}
module.exports = Wall;
```

---

### 🧱 Room.js

**Purpose**:
Represents a room in the maze. Each room has a number and is cloneable.

```javascript
// Room.js
class Room {
    constructor(number = 0) {
        this.number = number; // Room number (default = 0)
    }

    setNumber(number) {
        this.number = number; // Assign room number
    }

    clone() {
        return new Room(this.number); // Return new Room with same number
    }

    toString() {
        return `Room #${this.number}`;
    }
}
module.exports = Room;
```

---

### 🚪 Door.js

**Purpose**:
Connects two rooms. After cloning, it must be initialized to set room connections.

```javascript
// Door.js
class Door {
    constructor(room1 = null, room2 = null) {
        this.room1 = room1; // Reference to first room
        this.room2 = room2; // Reference to second room
    }

    initialize(room1, room2) {
        this.room1 = room1; // Set connection after cloning
        this.room2 = room2;
    }

    clone() {
        return new Door(); // Return a new uninitialized Door
    }

    toString() {
        return `Door between Room ${this.room1?.number} and Room ${this.room2?.number}`;
    }
}
module.exports = Door;
```

---

### 🎮 MazeGame.js

**Purpose**:
Creates the actual maze using only the factory. It does not care what concrete classes are used.

```javascript
// MazeGame.js
class MazeGame {
    createMaze(factory) {
        const maze = factory.makeMaze(); // Create Maze
        const r1 = factory.makeRoom(1); // Room 1
        const r2 = factory.makeRoom(2); // Room 2
        const door = factory.makeDoor(r1, r2); // Connect the rooms with a Door

        maze.addRoom(r1); // Add Room 1 to Maze
        maze.addRoom(r2); // Add Room 2 to Maze

        // Log details
        console.log(r1.toString());
        console.log(r2.toString());
        console.log(door.toString());

        return maze; // Return built maze
    }
}
module.exports = MazeGame;
```

---

### 🚀 index.js

**Purpose**:
Demo entry point. It sets up prototypes, builds a maze, and prints results.

```javascript
// index.js
const Maze = require('./Maze');
const Wall = require('./Wall');
const Room = require('./Room');
const Door = require('./Door');
const MazePrototypeFactory = require('./MazePrototypeFactory');
const MazeGame = require('./MazeGame');

// Create prototypes for factory
const prototypeMaze = new Maze();
const prototypeWall = new Wall();
const prototypeRoom = new Room();
const prototypeDoor = new Door();

// Pass them into the factory
const factory = new MazePrototypeFactory(prototypeMaze, prototypeWall, prototypeRoom, prototypeDoor);

// Use factory in game to build maze
const game = new MazeGame();
const maze = game.createMaze(factory);

// Print full maze summary
console.log(maze.toString());
```

---

## 🧪 Example Output

```bash
Room #1
Room #2
Door between Room 1 and Room 2
Maze with rooms: Room #1, Room #2
```

---

## ✅ How to Run

1. Save all files in the same folder.
2. In a terminal, run:

```bash
node index.js
```

---

## 📚 References

* Design Patterns: Elements of Reusable Object-Oriented Software (GoF Book)
* Pages: 117–120 (Prototype Pattern)
