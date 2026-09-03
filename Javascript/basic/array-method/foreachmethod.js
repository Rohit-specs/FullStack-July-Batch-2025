// forEach() = method used to iterate over the element
                // of an array and apply a specified function (callback)
                // to each element

                // array.forEach(callback)
                // element, index, array are provided

let numbers = [1,2,3,4,5];
numbers.forEach(double);
numbers.forEach(display);
numbers.forEach(triple);
numbers.forEach(display);

function double(element, index, array) {
    array[index] = element*2;
}

function triple(element, index, array) {
    array[index] = element*3;
}

function display(element) {
    console.log(element)
}