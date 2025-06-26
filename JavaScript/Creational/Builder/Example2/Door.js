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

