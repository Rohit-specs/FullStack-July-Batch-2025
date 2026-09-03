// destructuring = extract values from arrays and objects,
//                  then assign them to variable in a convenient way
//                  [] = to perform array destructuring
//                  {} = to perform object destructuring

// example 1
// SWAP the value of two variables

let a = 1;
let b = 2;
[a,b] = [b,a]

console.log(a);
console.log(b);


// example 2
// SWAP 2 elements in an array

const colors = ["red", "green" , "blue", "black", "white"];
[colors[0],colors[4]] = [colors[4],colors[0]];

console.log(colors);

// example 3
// assign array elements to variable

const color = ["red", "green" , "blue", "black", "white"];

const [firstColor, secondColor, thirdColor, ...extraColors] = color;

console.log(firstColor);
console.log(secondColor);
console.log(thirdColor);
console.log(extraColors);

// example 4
// EXACT VALUES FROM OBJECTS

const person1 = {
    firstName: "Rohit",
    lastName: "Kumar",
    age: 50
}

const person2 = {
    firstName: "John",
    lastName: "Doe",
    age: 99
}
const {
    firstName, lastName , age, job="Unemployed"
}=person2;
console.log(firstName);
console.log(lastName);
console.log(age);

// example 5
// destructure in function parameters

function displayPerson({firstName, lastName, age, job= "Full stack developer"}) {
    console.log(`name: ${firstName} ${lastName}`)
    console.log(`age: ${age}`)
    console.log(`age: ${job}`)
}
displayPerson(person1)