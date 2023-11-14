// run using NodeJS

const fs = require("fs");

const readData = fs.readFileSync("./input.txt", "utf-8"); // Read input file

const squares = readData
	.split(/\r?\n/) // Split into string[]
	.map((str) => Number(str.trim())) // Convert to number[]
	.map((num) => num * num); // Square each number

const sum = squares.reduce((previous, current) => previous + current, 0); // Find sum of each squared number

console.log(`The sum is ${sum}`);
