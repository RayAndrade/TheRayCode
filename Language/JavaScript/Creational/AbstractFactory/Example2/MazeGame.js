class MazeGame {
    createMaze(factory) {
        const maze = factory.makeMaze();
        const room1 = factory.makeRoom(1);
        const room2 = factory.makeRoom(2);
        const door = factory.makeDoor(room1, room2);
        const wall1 = factory.makeWall();
        const wall2 = factory.makeWall();

        maze.addRoom(room1);
        maze.addRoom(room2);

        console.log(room1.toString());
        console.log(room2.toString());
        console.log(door.toString());
        console.log(wall1.toString());
        console.log(wall2.toString());

        return maze;
    }
}
module.exports = MazeGame;