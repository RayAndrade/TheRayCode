class Logistics {
    createTransport() {
        throw new Error("Method 'createTransport()' must be implemented.");
    }
    planDelivery() {
        const transport = this.createTransport();
        transport.deliver();
    }
}
module.exports = Logistics;