const MazeFactory = require('./AbstractFactory');
const Maze = require('./Maze');
const EnchantedRoom = require('./EnchantedRoom');
const EnchantedWall = require('./EnchantedWall');
const EnchantedDoor = require('./EnchantedDoor');

class EnchantedMazeFactory extends MazeFactory {
    makeMaze() {
        return new Maze();
    }
    makeWall() {
        return new EnchantedWall();
    }
    makeRoom(number) {
        return new EnchantedRoom(number, this.castSpell());
    }
    makeDoor(room1, room2) {
        return new EnchantedDoor(room1, room2);
    }
    castSpell() {
        return "Alohomora"; // Example spell
    }
}
module.exports = EnchantedMazeFactory;