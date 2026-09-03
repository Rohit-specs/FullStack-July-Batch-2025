// ES6 Module = An external file that contains reusable code
                // that can be imported into other JavaScript files
                // Can contain variable, classes, function ... and more
                // Introduced as part of ECMAScript 2015 update

import {PI, getCircumference, getArea, getVolume} from './mathUtils.js';

console.log(PI);

let radius = 10;
const circumference = getCircumference(radius);
const area = getArea(radius);
const volume = getVolume(radius);

console.log(`Circumference of ${radius} radius: ${circumference.toFixed(2)}cm`);
console.log(`Area of ${radius} radius: ${area.toFixed(2)}cm^2`);
console.log(`Volume of ${radius} radius: ${volume.toFixed(2)}cm^3`);