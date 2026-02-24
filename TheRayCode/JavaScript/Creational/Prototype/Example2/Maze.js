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