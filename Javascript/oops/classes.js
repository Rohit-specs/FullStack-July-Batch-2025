// class = {ES6 feature} provides a more structured and cleaner way to 
            // work with objects ompared to traditional constructor functions
            // ex - static keyword, encapsulation, inheritance

class Product{
    constructor(name, price){
        this.name = name,
        this.price = price;
    }

    displayProduct(){
        console.log(`Product: ${this.name}`);
        console.log(`Price: $${this.price}`);
    }
}

const product1 = new Product("Shirt",450)
const product2 = new Product("Pants",999)
const product3 = new Product("T-shirt",399)

product1.displayProduct()
product2.displayProduct()
product3.displayProduct()