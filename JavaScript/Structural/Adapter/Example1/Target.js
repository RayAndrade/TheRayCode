// Target.js

class Target {
    // defines the expected client interface
    request() {
        throw new Error("request() must be implemented by subclasses");
    }
}

module.exports = Target;
