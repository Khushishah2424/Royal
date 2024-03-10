// const zorder = "Sandwich";
// order(zorder);
// function order(zorder){
//     prepare(5000);
//     deliver(10000);
// }

// function prepare(time){
//     console.log("Waiting");
//     setTimeout(()=>{
//         console.log("Order done");
//     },time);
    
// }

// function deliver(time){
//     setTimeout((time)=>{
//         console.log("Delivered");
//     },time);
// }
let orderedCancle = false;
 function placeOrder(){
    const status =  document.getElementById("status");
    const orderPrep =  document.getElementById("orderPrep");
    const delivery =     document.getElementById("delivery");
    const limit = document.getElementById("limit");
    limit.innerHTML = "You have 5 second to cancel your order";
    status.innerText = "Order placed!";
    document.getElementById("cancelButton").style.display = "block";

    setTimeout(() => {
        if (!orderedCancle){ 
            orderPreparation();
        }
    }, 4000);
    setTimeout(() => {
        if (!orderedCancle){ 
            delivered();
        }
    }, 9000);
}
    
function ordercancle(){
    orderedCancle = true;
    document.getElementById("status").innerHTML = "Order cancle";
    document.getElementById("orderPrep").innerHTML = " ";
    document.getElementById("delivery").innerHTML = " ";
    document.getElementById("limit").innerHTML = " ";
    document.getElementById("cancelButton").style.display = "none";

}

    
function orderPreparation(){
    if(orderedCancle === false){
        document.getElementById("cancelButton").style.display = "none";
        orderPrep.innerText="Order is in preparation period";
        document.getElementById("limit").innerHTML = " ";


    }

}
    
function delivered(){
    if(orderedCancle === false){
        document.getElementById("delivery").innerText="Order is on the way";
        document.getElementById("limit").innerHTML = " ";
        document.getElementById("cancelButton").style.display = "none";
        // document.getElementById("status").innerHTML = " ";
        // document.getElementById("orderPrep").innerHTML = " ";
    }
        
 }

