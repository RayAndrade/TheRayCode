// index.js
const MazeGame = require('./MazeGame');
const StandardMazeBuilder = require('./StandardMazeBuilder');

const builder = new StandardMazeBuilder(); // Create builder
const game = new MazeGame();               // Create director
const maze = game.createMaze(builder);     // Construct maze

console.log(maze.toString());              // → Maze with rooms: Room #1, Room #2

