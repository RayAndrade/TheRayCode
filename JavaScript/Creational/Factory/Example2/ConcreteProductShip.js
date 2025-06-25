const Transport = require('./Product');

class Ship extends Transport {
    deliver() {
        console.log("Delivering by sea in a container.");
    }
}
module.exports = Ship;