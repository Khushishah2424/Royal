const getdata = ()=>{
    const promise = new Promise((resolve,reject) =>{
        setTimeout(()=>{
            resolve("Data is fetch succefully");
            // reject("Errror");
        },3000);
    })

console.log(promise);
promise.catch((error)=>{
    console.log("Error",error);
})
promise.then((data)=>{
    console.log("data...",data);
})
}
getdata()