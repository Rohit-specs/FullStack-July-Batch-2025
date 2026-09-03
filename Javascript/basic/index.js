// // variables = a container that stores a value.

// // 1. declaration       let x;
// // 2. assignment        x = 100;

// let age = 25;
// let price = 34;
// let gpa = 9.4;

// // typeof is used to print the datatype of object
// console.log(typeof age);
// console.log(`you are ${age} years old`);
// console.log(typeof price);
// console.log(`the price is ${price}`);
// console.log(typeof gpa);
// console.log(`Your gpa is : ${gpa}`);

// // String
// // example "rohit",'rohit',`rohit`
// let firstname="Rohit";
// let lastname="Kumar";

// console.log(typeof firstname);
// console.log(`Your name is ${firstname+" "+lastname}`);

// let email="rohit@gmail.com";
// console.log(`your email is ${email}`);

// // BOOLEAN

// let online = false;
// let isstudent = true;
// let forsale = true;
// console.log("You are online:",online);
// console.log("enrolled :"+isstudent);
// console.log(`This car is for sale: ${forsale}`);

// document.getElementById("p1").textContent = `Your name is ${firstname+lastname}`;
// document.getElementById("p2").textContent =  `Your age is ${age}`;


// // OPERATORS

// // arithemetic operator = operand (value, variable , etc.)
//                         // operator(+ * - / %)
//                         // ex 11 = x + 5
// let students = 30;
// // students -= 5;
// // students += 5;
// // students *= 5;
// // students %= 5;
// // students /= 5;
// // students **=2;
// // students++;
// // students--;

// console.log(students);

// operator precedence
// 1. parenthesis()
// 2. exponents
// 3. multiply & division & modulo
// 4. addition & subtraction


// TYPE CONVERSION = change the datatype of a value to another

// let year = window.prompt("How old are you? ");
// year = Number(year)

// console.log(year, typeof year);


// const = a variable that can't be changed
const PI = 3.14159;
let radius;
let circumference;

// radius = window.prompt("Enter the radius of a circle: ");
radius = Number(radius);
circumference = 2 * PI * radius;
console.log(circumference)

//  =   assignment operator 
//  ==  (compare if values are equal)
//  === strict equality operator (compare if values & datatype are equal)
//  !=  inequality operator
//  !== strict inequality operator

if (PI !== "3.17159"){
    console.log("That is not pi")
}
else{
    console.log("That is Pi")
}

// array = a variable like structure that can hold more than 1 value

let fruits = ["apple","orange","papaya"]
console.log(fruits[0]);
console.log(fruits);
fruits.pop()
console.log(fruits);
fruits.unshift("Mango") //move mango at the starting index 
console.log(fruits);
fruits.shift() //move mango at the starting index 
console.log(fruits);
console.log(fruits.indexOf("orange"));


for(let fruit of fruits){
    console.log(fruit);
}