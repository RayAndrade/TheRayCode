const Door = require('./Door');

class EnchantedDoor extends Door {
    toString() {
        return `Enchanted Door between Room ${this.room1.number} and Room ${this.room2.number}`;
    }
}
module.exports = EnchantedDoor;