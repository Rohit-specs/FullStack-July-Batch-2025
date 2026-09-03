// setTimeout() = function in Javascript that allows you to shedule
                // the excution of a function after an amount of time (milliseconds)
                // times are approximate (varies based on the workload of the JavaScript runtime env.)

                // setTimeout(callback, delay);

                // clearTimeout(timeoutId) = can cancel a timeout before it trigger
                
const timeoutId = setTimeout(() => {
   console.log("Hello");
}, 3000);

clearTimeout(timeoutId);