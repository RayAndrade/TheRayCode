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

