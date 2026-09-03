// SWITCH = can be an efficient replacement to many else if statements 
let day = 1;
switch (day) {
    case 1:
        console.log("It's monday")
        break;
    case 2:
        console.log("It's tuseday")
        break;
    case 3:
        console.log("It's wednesday")
        break;
    case 4:
        console.log("It's thusday")
        break;
    case 5:
        console.log("It's friday")
        break;
    case 6:
        console.log("It's saturday")
        break;
    case 7:
        console.log("It's sunday")
        break;

    default:
        console.log(`${day} is not a day`)
        break;
}

let testscore = 92;
let grade;

switch(true){
    case testscore>=90:
        grade = 'A';
        break;
    case testscore>=80:
        grade = 'B';
        break;
    case testscore>=70:
        grade = 'C';
        break;
    case testscore>=60:
        grade = 'D';
        break;
    case testscore>=50:
        grade = 'E';
        break;
    default:
        grade = "F";
}
console.log("Your grade is:",grade);