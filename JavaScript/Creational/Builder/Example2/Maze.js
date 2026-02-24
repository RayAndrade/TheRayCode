class Maze {
    constructor() {
        this.rooms = [];
    }
    addRoom(room) {
        this.rooms.push(room);
    }
    toString() {
        return `Maze with rooms: ${this.rooms.map(r => r.toString()).join(', ')}`;
    }
}
module.exports = Maze;