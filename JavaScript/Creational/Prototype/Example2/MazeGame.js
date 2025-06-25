// MazeGame.js
class MazeGame {
    createMaze(factory) {
        const maze = factory.makeMaze(); // Create Maze
        const r1 = factory.makeRoom(1); // Room 1
        const r2 = factory.makeRoom(2); // Room 2
        const door = factory.makeDoor(r1, r2); // Connect the rooms with a Door

        maze.addRoom(r1); // Add Room 1 to Maze
        maze.addRoom(r2); // Add Room 2 to Maze

        // Log details
        console.log(r1.toString());
        console.log(r2.toString());
        console.log(door.toString());

        return maze; // Return built maze
    }
}
module.exports = MazeGame;