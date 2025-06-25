const Logistics = require('./Creator');
const Truck = require('./ConcreteProductTruck');

class RoadLogistics extends Logistics {
    createTransport() {
        return new Truck();
    }
}
module.exports = RoadLogistics;