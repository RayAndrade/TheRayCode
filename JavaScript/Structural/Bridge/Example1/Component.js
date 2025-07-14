class Component {
    operation() {
        throw new Error("operation() must be implemented.");
    }
    add(component) {
        throw new Error("add() not supported by default.");
    }
    remove(component) {
        throw new Error("remove() not supported by default.");
    }
    getChild(index) {
        throw new Error("getChild() not supported by default.");
    }
}
module.exports = Component;