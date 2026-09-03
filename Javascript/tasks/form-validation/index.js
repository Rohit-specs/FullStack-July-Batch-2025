document.getElementById("form").addEventListener("submit", function (e) {
    e.preventDefault();
    let name = document.getElementById("name")?.value;
    let email = document.getElementById("email")?.value;
    let phone = document.getElementById("phone")?.value;
    let password = document.getElementById("password")?.value;
    let confirmPassword = document.getElementById("confirmPassword")?.value;

    let isValid = true;

    if (!validName(name)) {
        isValid = false
        let feedBack = document.getElementById("name").nextElementSibling;
        feedBack.textContent = "Atleast 3 character in first name"
    }
    else {
        let feedBack = document.getElementById("name").nextElementSibling;
        feedBack.textContent = ""
    }
    if (!validEmail(email)) {
        isValid = false
        let feedBack = document.getElementById("email").nextElementSibling;
        feedBack.textContent = "Invalid email"
    }
    else {
        let feedBack = document.getElementById("email").nextElementSibling;
        feedBack.textContent = ""
    }
    if (!validPhone(phone)) {
        isValid = false
        let feedBack = document.getElementById("phone").nextElementSibling;
        feedBack.textContent = "Invalid Mobile number"
    }
    else {
        let feedBack = document.getElementById("phone").nextElementSibling;
        feedBack.textContent = ""
    }
    if (!validPassword(password)) {
        isValid = false
        let feedBack = document.getElementById("password").nextElementSibling;
        feedBack.textContent = "Invalid password"
    }
    else {
        let feedBack = document.getElementById("password").nextElementSibling;
        feedBack.textContent = ""
    }
    if (!validPassword(confirmPassword)) {
        isValid = false
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = "Invalid Password"
    }
    else if (password != confirmPassword) {
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = "Password didn't match"
    }
    else {
        let feedBack = document.getElementById("confirmPassword").nextElementSibling;
        feedBack.textContent = ""
    }
    let skills = document.querySelectorAll(".check-box-group input[name='skill']:checked")
    let skillsArray = Array.from(skills).map((element) => element.value)
    let skillLength = skillsArray.length

    if (skillLength < 2) {
        isValid = false;
        let feedBack = document.querySelector(".check-box-group #errorFeedback")
        feedBack.textContent = "Have to select atleast two skills"
    }
    else {
        let feedBack = document.querySelector(".check-box-group #errorFeedback")
        feedBack.textContent = ""
    }
    genders = document.querySelectorAll("input[name='gender']")

    let isChecked = false;
    genders.forEach(genders => {
        if(genders.checked){
            isChecked = true;
        }
    });
    if(!isChecked){
        isValid = false;
        let feedBack = document.querySelector(".radio-group #errorFeedback");
        feedBack.textContent = "Please select gender before submit"
    }
    else{
        let feedBack = document.querySelector(".radio-group #errorFeedback");
        feedBack.textContent = ""
    }

    if (isValid) {
        window.alert("Registration Successful")
        document.getElementsByid("form").reset()
    }
})

function validName(name) {
    name = name.trim();
    let spaceregex = /\s+/g
    name = name.replace(spaceregex, " ");
    let nameregex = /^[a-zA-ZÀ-ÿ]{3,}(?: [a-zA-ZÀ-ÿ]+)+$/
    return nameregex.test(name);
}
function validEmail(email) {
    email = email.trim()
    let emailregex = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/
    return emailregex.test(email);
}
function validPhone(phone) {
    phone = phone.trim()
    let phoneregex = /^(?:(?:\+|0{0,2})91[\s-]?|0)?[6-9]\d{9}$/
    return phoneregex.test(phone);
}
function validPassword(password) {
    password = password.trim()
    let passwordregex = /^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/
    return passwordregex.test(password);
}

// name = document.getElementById("name");
// name.addEventListener('input',debouncing)
// function debouncing(func, delay) {
//     let timer;
//     return function(...args){
        
//     }
// }
