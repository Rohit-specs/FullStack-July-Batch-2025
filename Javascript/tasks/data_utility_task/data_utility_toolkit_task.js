const users = [{
    id: 101,
    name: "  alex JOHNSON ",
    dob: "1992-06-15",
    salary: "55000",
    skills: ["html", "css", "javascript"]
}, {
    id: 102,
    name: "maria smith",
    dob: "1988-11-03",
    salary: "72000",
    skills: ["react", "node", "css"]
}, {
    id: 103,
    name: "john doe",
    dob: "1996-02-25",
    salary: "48000",
    skills: ["vue", "javascript", "html"]
}];

// STRING OPERATIONS
titled_array = []
function titled_string(name_string) {
    new_array = []
    name_string = name_string.trim()
    array = name_string.split(" ")
    for (let name of array) {
        name = name.charAt(0).toUpperCase() + name.slice(1).toLowerCase()
        new_array.push(name)
    }
    valid_name_string = new_array.join(" ")
    return valid_name_string
}
for (let user of users) {
    titled_array.push(titled_string(user["name"]))
}
console.log("Title Case user names:", titled_array)

// ARRAY OPERATIONS
javascript_count = 0
unique_skill_list = []
for (let user of users) {
    for (const element of user.skills) {
        if (!unique_skill_list.includes(element)) {
            unique_skill_list.push(element)
        }
        if (element == "javascript") {
            javascript_count++;
        }
    }
}
unique_skill_list.sort()
console.log("Unique sorted skills:", unique_skill_list)
console.log("Javascript count:", javascript_count)

// NUMBER OPERATIONS

salary_list = users.map((x) => Number(x.salary))
maximum_salary = Math.max(...salary_list)
minimum_salary = Math.min(...salary_list)
salary_sum = salary_list.reduce((acc, curr) => acc + curr)
average_salary = salary_sum / salary_list.length
console.log("Maximum salary:", maximum_salary)
console.log("Minumum salary:", minimum_salary)
console.log("Average salary:", Math.round(average_salary))


// DATE OPERATIONS
function age(dob) {
    user_dob = new Date(dob)
    current_date  = new Date()
    let age = current_date.getFullYear() - user_dob.getFullYear()
    month = current_date.getMonth() - user_dob.getMonth()
    if (month<0||(month==0 && current_date.getDate() < user_dob.getDate())){
        age--;
    }
    return age;
}
// users_age = users.map((x) => Object(name: titled_string(x.name),age: age(x.dob)))
users_age=[]
for (const user of users) {
    data = {name: titled_string(user.name),age: age(user.dob)}
    users_age.push(data)
}
oldest = users_age[0]
for (let i = 0; i < users_age.length; i++) {
    if (users_age[i].age > oldest.age){
        oldest = users_age[i];
    }
}
console.log("Oldest user:",oldest)