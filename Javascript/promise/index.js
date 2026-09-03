let promise1 = new Promise((resolve,reject)=>{
    setTimeout(()=> {
    //  let a = 10;
    // let b = 12;
    console.log("from promise")
    if (true) {
        resolve("a is greater than b")
    }
    else{
        reject("a is less than b")
    }
     
    },4000 )
});

// console.log(promise1)
promise1
.then((res)=> console.log(res))
.catch((err)=> console.log(err))
console.log("from code")