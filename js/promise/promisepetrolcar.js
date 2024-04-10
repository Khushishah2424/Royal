function car1click(){
    const clickcar = document.getElementById("clickcar");
    car1().then((car1data) => {
        console.log("Car 1...", car1data);
        alert("In process of filling petrol for car 1");
        car1Payment(car1data).then((data) => {
            alert(`Payment made for Car 1: ${data.price} for ${data.liter}`);
            document.getElementById("clickcar").style.animation = "driveOut 3s forwards";
        });
    });

 } 

 function car2click(){
    const click2car = document.getElementById("click2car");
    car2().then((car2data)=>{
        console.log("Car 2...", car2data);
        alert("In process of filling petrol for car 2");
        car2Payment((car2data)).then((data)=>{
            alert(`Payment made for Car 2: ${data.price} for ${data.liter}`);
            document.getElementById("clickcar").style.animation = "drive2Out 3s forwards";

        })

    })
}

 
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
        },7000)
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
        },9000)
    })
}

// const Car1 = () => {
//     console.log("Car 1 is coming...");

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve();
//         }, 5000); 
//     });
// };

// const Car2 = () => {
//     console.log("Car 2 is coming...");

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve();
//         }, 7000); 
//     });
// };

// const petrol = () => {
//     console.log("Filling petrol...");

//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             console.log("Petrol filled");
//             resolve();
//         }, 3000); 
//     });
// };

// const move = () => {

//     Car1()
//     .then(() => {
//         return petrol();
//     })
//     .then(() => {
//         console.log("Car 1 leaving");
//         return Car2();
//     })
//     .then(() => {
//         return petrol();
//     })
//     .then(() => {
//         console.log("Car 2 leaving");
//     })
// };

// move();













