// Method Chaining = calling one method after another in one continous line of code.



let username = prompt("Enter your username");

username = username.trim().charAt(0).toUpperCase() + username.trim().slice(1).toLowerCase()

console.log(username)