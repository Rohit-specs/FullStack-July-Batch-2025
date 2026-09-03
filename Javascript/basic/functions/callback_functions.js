// callback = a function that is passed as an argument to another function.

// hello(wait);

// function hello(callback){
//     console.log("Hello!");
//     callback();
// }

// function wait() {
//     console.log('wait');
// }

// function goodbye() {
//     console.log("GoodBye!");
// }

sum(displayConsole,8,5)

function sum(callback, x, y) {
    let result = x + y;
    callback(result)
}

function displayConsole(result) {
    console.log(result);
}