userinput = window.prompt("Enter a string")
// userinput = "abiouuuujavascript"
vowels = "aeiouAEIOU"
result = []
for (let char of userinput) {
    if (vowels.includes(char)){
        if (!result.includes(char)){
            result.push(char)
        }
    }
}
console.log(result)