// .map() = accepts a callback and applies that function to each element of an array, then return a new array

const numbers = [1,2,3,4,5];

const squares = numbers.map((x) => x**2)
console.log(squares)

const cubes = numbers.map((x) => x**3)
console.log(cubes)


const students = ["Sandy","Rohit","Samsung","Sneha"];
const studentsUpper = students.map(upperCase);

function upperCase(element) {
    return element.toUpperCase();
}

console.log(studentsUpper)