// Door.js
class Door {
    constructor(room1 = null, room2 = null) {
        this.room1 = room1; // Reference to first room
        this.room2 = room2; // Reference to a second room
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