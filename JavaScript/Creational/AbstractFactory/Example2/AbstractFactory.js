class MazeFactory {
    makeMaze() {
        throw new Error("makeMaze() must be implemented.");
    }
    makeWall() {
        throw new Error("makeWall() must be implemented.");
    }
    makeRoom(number) {
        throw new Error("makeRoom(number) must be implemented.");
    }
    makeDoor(room1, room2) {
        throw new Error("makeDoor(room1, room2) must be implemented.");
    }
}
module.exports = MazeFactory;