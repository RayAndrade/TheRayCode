// Component.js

// Component defines the interface that can have dynamic behavior added to it
class Component {
    operation() {
        throw new Error("operation() must be implemented by subclasses");
    }
}

module.exports = Component;