const Room = require('./Room');

class EnchantedRoom extends Room {
    constructor(number, spell) {
        super(number);
        this.spell = spell;
    }
    toString() {
        return `Enchanted Room #${this.number} [Spell: ${this.spell}]`;
    }
}
module.exports = EnchantedRoom;