document.getElementById("form").addEventListener("submit", function (e) {
    e.preventDefault()
    isValid = true;

    validName(name.value);
    validEmail(email.value);
    validPhone(phone.value);
    validPassword(password.value);
    validConfirmPassword(confirmPassword.value);

    if (isValid) {
        console.log("Form submitted");
        document.getElementById("form").reset()
    };})
const name = document.getElementById("name")
const email = document.getElementById("email")
const phone = document.getElementById("phone")
const password = document.getElementById("password")
const confirmPassword = document.getElementById("confirmPassword")
isValid = true
function validName(name) {
    name = name.trim();
    let spaceregex = /\s+/g
    name = name.replace(spaceregex, " ");
    let nameregex = /^[a-zA-ZÀ-ÿ]{3,}(?: [a-zA-ZÀ-ÿ]+)+$/
    
    if (!nameregex.test(name)) {
        isValid = false
        let feedBack = document.getElementById("name").nextElementSibling;
        feedBack.textContent = "Atleast 3 character in first name"
    }
    else {
        let feedBack = document.getElementById("name").nextElementSibling;
        feedBack.textContent = ""
    }
}
function validEmail(email) {
    email = email.trim()
    let emailregex = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/

 if (!emailregex.test(email)) {
        isValid = false
        let feedBack = document.getElementById("email").nextElementSibling;
        feedBack.textContent = "Invalid email"
    }
else {
    let feedBack = document.getElementById("email").nextElementSibling;
    feedBack.textContent = ""
}}
function validPhone(phone) {
    phone = phone.trim()
    let phoneregex = /^(?:(?:\+|0{0,2})91[\s-]?|0)?[6-9]\d{9}$/;    
    if (!phoneregex.test(phone)) {
        isValid = false
        let feedBack = document.getElementById("phone").nextElementSibling;
        feedBack.textContent = "Invalid Mobile number"
    }
    else {
        let feedBack = document.getElementById("phone").nextElementSibling;
        feedBack.textContent = ""
    }
}
function validPassword(password) {
    password = password.trim()
    let passwordregex = /^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/
    if (!passwordregex.test(password)) {
        isValid = false
        let feedBack = document.getElementById("password").nextElementSibling;
        feedBack.textContent = "Invalid Password"
    }
    else{
        let feedBack = document.getElementById("password").nextElementSibling;
        feedBack.textContent = ""
    }
}
function validConfirmPassword(password) {
    password = password.trim()
    let passwordregex = /^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/
    if (!passwordregex.test(password)) {
        isValid = false
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = "Invalid Password"
    }
    else if (password != confirmPassword.value) {
        isValid = false
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = "Password didn't match"
    }
    else{
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = ""
    }
}

name.addEventListener("input", debouncing((e) => validName(e.target.value), 500))
email.addEventListener("input", debouncing((e) => validEmail(e.target.value), 500))
phone.addEventListener("input", debouncing((e) => validPhone(e.target.value), 500))
password.addEventListener("input", debouncing((e) => validPassword(e.target.value), 500))
confirmPassword.addEventListener("input", debouncing((e) => validConfirmPassword(e.target.value), 500))
function debouncing(fun,delay) {
    let timer;
    return function(...args) {
        clearTimeout(timer);
        timer = setTimeout(() => {
            fun.apply(this,args)
        }, delay);
    }
}