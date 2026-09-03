// reduce = reduce the elements of an array to a single value

const prices = [100,175,500,320,70,210];

const total = prices.reduce(sum);
console.log(`$${total}`)

function sum(accumulator, element) {
    return accumulator+element
}