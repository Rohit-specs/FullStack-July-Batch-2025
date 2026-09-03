// string method = allow you to manipulate and work with text (string)

let username = "Rohit559";
console.log(username.indexOf("5"))
console.log(username.lastIndexOf("5"))
console.log(username.charAt(0))
console.log(username.length);
username = "    Rohit559";
console.log(username.trim())
username = "Rohit559";
console.log(username.toLowerCase())
console.log(username.toUpperCase())
console.log(username.repeat(3))
console.log(username.startsWith('r'))
console.log(username.endsWith('9'))
console.log(username.includes("i"))

let phoneNumber = "123-456-7890";

console.log(phoneNumber.replaceAll("-",""));
console.log(phoneNumber.padStart("15","0"));
console.log(phoneNumber.padEnd("15","0"));


// string slicing = creating a substring from a portion of another string
                    // string.slice(start,end)

const fullName = "Rohit Kumar"
// let firstName = fullName.slice(0,5)
// let lastName = fullName.slice(6,11)
let firstName = fullName.slice(0,fullName.indexOf(" "))
let lastName = fullName.slice(fullName.indexOf(" ")+1,)
console.log(firstName);
console.log(lastName);
let firstChar = fullName.slice(0,1)
let lastChar = fullName.slice(-1)
console.log(firstChar);
console.log(lastChar);
const email = "rohit@gmail.com";
let Username = email.slice(0,email.indexOf("@"));
let extension = email.slice(email.indexOf("@"));
console.log(Username);
console.log(extension);