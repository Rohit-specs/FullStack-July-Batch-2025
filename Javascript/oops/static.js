// static = keyword that defines properties or methods that belongs
            // to a class itself than the objects created
            // from that class (class owns anything static, not the objects)

class MathUtil{
    static PI = 3.14159;

    static getDiameter(radius){
        return radius*2;
    }
    static getCircumference(radius){
        return 2 * this.PI *radius;
    }
    static getArea(radius){
        return this.PI *radius **2
    }
}

console.log(MathUtil.PI)

console.log(MathUtil.getDiameter(10))
console.log(MathUtil.getCircumference(10))
console.log(MathUtil.getArea(10))