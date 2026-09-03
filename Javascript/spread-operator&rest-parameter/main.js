// spread operator = expands an array into seperate elements 
// rest parameter = bundles seperate elements into an array

array = ["a","b","c"]
newarray = [...array,"d","e","f"]
console.log(newarray)


function marks_array(...array) {
    return array
}

english_marks = 98;
science_marks = 89;
maths_marks = 90;
console.log(marks_array(english_marks,science_marks,maths_marks))