// Component.js

// Component: defines the interface for all objects in the composition
class Component {
    // operation method to be implemented by Leaf or Composite
    operation() {
        throw new Error("operation() must be implemented.");
    }

    // default add child (for Composite)
    add(component) {
        throw new Error("add() not supported by default.");
    }

    // default remove child (for Composite)
    remove(component) {
        throw new Error("remove() not supported by default.");
    }

    // default get child (for Composite)
    getChild(index) {
        throw new Error("getChild() not supported by default.");
    }
}

module.exports = Component;
