function car1click(){
    const clickcar = document.getElementById("clickcar");
    car1().then((car1data) => {
        console.log("Car 1...", car1data);
        alert("In process of filling petrol for car 1");
        car1Payment(car1data).then((data) => {
            alert(`Payment made for Car 1: ${data.price} for ${data.liter}`);
            document.getElementById("clickcar").style.animation = "driveOut 3s forwards";
        });

        // function car2click(){
        //     const click2car = document.getElementById("click2car");
        //     car2().then((car2data)=>{
        //         console.log("Car 2...", car2data);
        //         alert("In process of filling petrol for car 2");
        //         car2Payment((car2data)).then((data)=>{
        //             alert(`Payment made for Car 2: ${data.price} for ${data.liter}`);
        //         })
    
        //     })
        // }


    });

 }
 setTimeout(()=>{
    document.getElementById("clickcar").addEventListener("click",car1click)
    // document.getElementById("click2car").addEventListener("click",car2click)
 },3000);



 
const car1 = ()=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                carnum : "GJ1033",
                status : "Petrol Empty",
                liter : "1ltr",
                price : 100,
            })
        },2000)
    })
}

const car1Payment = (car1data)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                carnum : car1data.carnum,
                status : car1data.status,
                liter : car1data.liter,
                price : car1data.price,
                payment : "DONE",
            })
        },3000)
    })
}

const car2 = ()=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                carnum : "MH5600",
                status : "Petrol Empty",
                liter : "2ltr",
                price :200,
            })
        },2000)
    })
}

const car2Payment = (car2data)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                carnum : car2data.carnum,
                status : car2data.status,
                liter : car2data.liter,
                price : car2data.price,
                payment : "DONE",
            })
        },3000)
    })
}












