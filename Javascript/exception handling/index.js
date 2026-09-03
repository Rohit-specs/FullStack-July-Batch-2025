// Error = An Object that is created to represent a problem that occurs
//          occurs often with user input or establishing a connection

// try { } = Excloses code that might potentially cause an error
// catch { } = Catch and handle any thrown Error from try { }
// finally { } = (optional) always executes. Used mostly for clean up
// ex. close files, close connections, release resources

try {
    const dividend = window.prompt("Enter a dividend: ");
    const divisor = window.prompt("Enter a divisor: ");

    const result = dividend / divisor;
    console.log(result);
}
catch(error){
    console.error(error);
}
