import { Singleton } from './Singleton.js';

const instance1 = Singleton.getInstance();
console.log("Instance 1 value:", instance1.getValue());

const instance2 = Singleton.getInstance();
console.log("Instance 2 value:", instance2.getValue());

console.log("Are both instances the same?", instance1 === instance2);

try {
    const bad = new Singleton();
} catch (e) {
    console.error("Error:", e.message);
}