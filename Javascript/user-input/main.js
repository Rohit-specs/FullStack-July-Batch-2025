// HOW TO ACCEPT USER INPUT
 
// 1. EASY WAY = widow propmt
// 2. PROFESSIONAL WAY = HTML textbox

let username;
username  = window.prompt("What's your username? ");
console.log(username);

let username2;
document.getElementById("mysubmit").onclick = function(){
    username2 = document.getElementById("username").value;
    console.log(username2);
    document.getElementById("myh1").textContent = `hello ${username2}`
}