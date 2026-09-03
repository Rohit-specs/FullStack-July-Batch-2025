// getter = special method that makes a property readable
// setter = special method that makes a property writeable

// validate and modify a value when reading/writing a property

class Rectangle{
    constructor(width,height){
        this.width = width;
        this.height = height;
    }
    set width(newwidth){
        if (newwidth > 0) {
            this._width = newwidth;
        } else {
            console.error("Width must be a positive number")
        }
    }
    set height(newheight){
        if (newheight > 0) {
            this._height = newheight;
        } else {
            console.error("Width must be a positive number")
        }
    }

    get width(){
        return this._width;
    }
    get height(){
        return this._height;
    }
}

const rectangle = new Rectangle(3,8)

rectangle.width = 5;
rectangle.height = "pizza"

console.log(rectangle.width);
console.log(rectangle.height);