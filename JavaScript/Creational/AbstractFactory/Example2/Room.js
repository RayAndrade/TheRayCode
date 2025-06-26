class Room {
    constructor(number) {
        this.number = number;
    }
    toString() {
        return `Room #${this.number}`;
    }
}
module.exports = Room;