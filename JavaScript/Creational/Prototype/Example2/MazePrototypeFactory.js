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