class Product {
    constructor() {
        this.parts = []
    }
    add(part) {
        this.parts.push(part);
    }
    show() {
        console.log("Product parts: " + this.parts.join(", "));
    }
}
module.exports = Product;