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

