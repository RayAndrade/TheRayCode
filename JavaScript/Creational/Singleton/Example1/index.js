// Define the Singleton class
class Singleton {
    constructor() {
        // Prevent direct construction if an instance already exists
        if (Singleton._instance) {
            throw new Error("Use Singleton.getInstance() instead of new.");
        }

        // Simulated internal state (e.g., timestamp)
        this.timestamp = Date.now();

        // Save this instance
        Singleton._instance = this;
    }

    // Static method to access the singleton instance
    static getInstance() {
        // Create the instance if it doesn't exist
        if (!Singleton._instance) {
            new Singleton(); // Constructor assigns _instance
        }

        return Singleton._instance;
    }

    // Example method
    showMessage() {
        console.log("Hello from the Singleton!");
    }

    // Another example method
    getCreatedTime() {
        return this.timestamp;
    }
}

// ✅ Usage / Testing

const first = Singleton.getInstance();
first.showMessage(); // Hello from the Singleton!
console.log("First created at:", first.getCreatedTime());

const second = Singleton.getInstance();
console.log("Second created at:", second.getCreatedTime());

console.log("Same instance?", first === second); // true

// ❌ Attempting direct construction throws
try {
    const bad = new Singleton();
} catch (e) {
    console.error("Error:", e.message);
}
