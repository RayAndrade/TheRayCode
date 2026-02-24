const EnchantedMazeFactory = require('./EnchantedMazeFactory');
const MazeGame = require('./MazeGame');

const factory = new EnchantedMazeFactory();
const game = new MazeGame();
const maze = game.createMaze(factory);

console.log(maze.toString());
