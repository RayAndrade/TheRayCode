// Product.js
// Purpose: Abstract base class for products

class Product {
    operation() {
        throw new Error("Abstract method 'operation' must be implemented by subclass.");
    }
}

export default Product;
