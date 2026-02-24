// Defines the interface for cloning itself
class Prototype {
    clone() {
        throw new Error("clone() must be implemented by subclasses");
    }
}
module.exports = Prototype;