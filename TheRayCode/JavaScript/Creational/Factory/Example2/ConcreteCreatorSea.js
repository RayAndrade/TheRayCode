const Logistics = require('./Creator');
const Ship = require('./ConcreteProductShip');

class SeaLogistics extends Logistics {
    createTransport() {
        return new Ship();
    }
}
module.exports = SeaLogistics;