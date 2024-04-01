const Placeorder = ()=>{
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept({orderId:101,amount:5000,status:"order done succesfully.."})
        },3000)
    })
}
console.log("starts");
Placeorder().then((data)=>{
    console.log("Order is placed succesfully",data);
})

 