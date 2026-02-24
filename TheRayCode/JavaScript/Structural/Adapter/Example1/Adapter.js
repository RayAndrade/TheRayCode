const Target = require('./Target');
const Adaptee = require('./Adaptee');

class Adapter extends Target {
    constructor() {
        super();
        this.adaptee = new Adaptee();
    }

    request() {
        return `Adapter: (translated) ${this.adaptee.specificRequest()}`;
    }
}

module.exports = Adapter;
