const Transport = require('./Product');

class Truck extends Transport {
    deliver() {
        console.log("Delivering by land in a box.");
    }
}
module.exports = Truck;