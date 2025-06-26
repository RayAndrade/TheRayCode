const Wall = require('./Wall');

class EnchantedWall extends Wall {
    toString() {
        return "Enchanted Wall with sparkles";
    }
}
module.exports = EnchantedWall;