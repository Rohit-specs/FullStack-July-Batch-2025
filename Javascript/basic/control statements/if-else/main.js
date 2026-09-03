const submit_btn = document.getElementById("submit-btn")
const result = document.getElementById("result")
const my_text = document.getElementById("age");
let age;
submit_btn.onclick = function(){
    age = my_text.value;
    age = Number(age)
    if (age>=100){
        result.textContent = ("You are to old to Enter")
    }
    else if (age == 0){
        result.textContent = "You can't enter you are just born"
    }
    else if (age>=18){
        result.textContent = "You are old enough to enter"
    }
    else if (age < 0){
        result.textContent = "Your age can't be below 0"
    }
    else{
        result.textContent = "You must be 18+ to enter"
    }

}