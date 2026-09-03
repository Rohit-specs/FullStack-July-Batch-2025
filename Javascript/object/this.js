// this = reference to the object where THIS is used
            // (the object depends on the imediate context)
            // person.name = this.name

const person1 ={
    name: "Rohit",
    favFood: "Dubke",
    greet: function () {console.log(`Hi! I am ${this.name}`)},
    eat: function(){console.log(`${this.name} is eating ${this.favFood}`)}
}
person1.greet()
// (we can't use arrow function here in value because when we get value it shows undefined) this happen when we use this.attribute method inside arrow function