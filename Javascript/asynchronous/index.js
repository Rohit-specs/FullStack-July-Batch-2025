// synchronous = Executes line by line consecutively in a sequential
                // manner code that waits for an operations to complete


// asynchronous = Allows multiple operations to be performed concurrently without
                // waiting doesn't block the execution flow and allows the program to continue
                // (I/O operations, network requests, fetching data)
                // handled with: Callbacks, Promises, Async/Awaits

function func1(callback){
    setTimeout(() => {
        console.log("Task 1")
        callback()
    }, 2000);
}

function func2(){
    console.log("Task 2")
    console.log("Task 3")
    console.log("Task 4")
}

func1(func2);