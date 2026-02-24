class Singleton {
    constructor() {
        if (Singleton.instance) {
            return Singleton.instance;
        }
        this.privateRandomNumber = Math.random();
        Singleton.instance = this;
    }
    publicMethod() {
        console.log("Public method called");
        this.privateMethod();
    }
    getRandomNumber() {
        return this.privateRandomNumber;
    }
    privateMethod() {
        console.log("Private method called");
    }
}

Singleton.instance = null;

const singletonA = new Singleton();
const singletonB = new Singleton();

singletonA.publicMethod();
console.log("Singleton A random number: " + singletonA.getRandomNumber());
console.log("Singleton B random number: " + singletonB.getRandomNumber());

console.log("Are both instances the same?", singletonA === singletonB);


