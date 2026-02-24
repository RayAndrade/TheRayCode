// index.js
const Maze = require('./Maze');
const Wall = require('./Wall');
const Room = require('./Room');
const Door = require('./Door');
const MazePrototypeFactory = require('./MazePrototypeFactory');
const MazeGame = require('./MazeGame');

// Create prototypes for factory
const prototypeMaze = new Maze();
const prototypeWall = new Wall();
const prototypeRoom = new Room();
const prototypeDoor = new Door();

// Pass them into the factory
const factory = new MazePrototypeFactory(prototypeMaze, prototypeWall, prototypeRoom, prototypeDoor);

// Use factory in game to build maze
const game = new MazeGame();
const maze = game.createMaze(factory);

// Print full maze summary
console.log(maze.toString());