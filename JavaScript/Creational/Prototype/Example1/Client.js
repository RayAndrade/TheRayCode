// Client uses prototypes and does not care about their concrete classes
class Client {
    constructor(prototype) {
        this.prototype = prototype;
    }

    // Delegates cloning to the prototype instance
    makeCopy() {
        return this.prototype.clone();
    }
}
module.exports = Client;