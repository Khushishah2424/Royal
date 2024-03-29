const Placeorder = ()=>{
    return new Promise = ((accept,reject)=>{
        setTimeout(()=>{
            accept({orderId:101,amount:5000,status:"order done succesfully.."})
        })
    })
}
var x = Placeorder();
console.log(x);
x.then((orderdata)=>{
    console.log("Order is placed is succesfully");
})