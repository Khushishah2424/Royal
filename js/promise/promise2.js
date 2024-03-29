const Placeorder = ()=>{
    var promise = new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept("order");
        })
    })

    console.log(promise);
    promise.then((orderdata)=>{
        console.log("ordered",orderdata);
    })
}