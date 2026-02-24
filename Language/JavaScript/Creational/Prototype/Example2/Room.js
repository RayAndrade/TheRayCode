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
