// Facade.js

const SubsystemA = require('./SubsystemA');
const SubsystemB = require('./SubsystemB');
const SubsystemC = require('./SubsystemC');

// Facade: provides a simple interface to complex subsystems
class Facade {
    constructor() {
        // create and store subsystem objects
        this.subsystemA = new SubsystemA();
        this.subsystemB = new SubsystemB();
        this.subsystemC = new SubsystemC();
    }

    // Provide a simple high-level operation
    simpleOperation() {
        const resultA = this.subsystemA.operationA(); // call SubsystemA
        const resultB = this.subsystemB.operationB(); // call SubsystemB
        const resultC = this.subsystemC.operationC(); // call SubsystemC

        // combine results to present a simpler API
        return `Facade combines: [ ${resultA} | ${resultB} | ${resultC} ]`;
    }
}

module.exports = Facade;
