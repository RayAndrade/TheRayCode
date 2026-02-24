let uniqueInstance = null;

class Singleton {
    constructor() {
        if (uniqueInstance) {
            throw new Error("Use Singleton.getInstance() instead of new.");
        }
        this.value = Math.random();
        uniqueInstance = this;
}
    static getInstance() {
        if (!uniqueInstance) {
            new Singleton();
        }
        return uniqueInstance;
    }
    getValue() {
        return this.value;
    }
}
export { Singleton };
