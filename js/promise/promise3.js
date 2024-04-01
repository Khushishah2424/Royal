const Placeorder = ()=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                orderID : 101,
                orderStatus : "Order placed",
                Amount : 500
            })
        },3000)
    })
}

const Payment = (orderdetails)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                orderID : orderdetails.orderID,
                Amount :  orderdetails.Amount,
                PaymentStatus : "Payment done"
            })
        },2000)
    })
}

console.log("Order is being placed ");
Placeorder().then((orderdetails)=>{
    console.log("Order placed :",orderdetails);
    Payment(orderdetails).then((orderdetails)=>{
        console.log("payment done",orderdetails);
    })
})
