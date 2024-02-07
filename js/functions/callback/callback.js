// function demo(){
//     console.log("this is demo fucntion");
// }
// function test(a){
//     console.log("value..",a)
//     a();
    
// }
// test(demo);

function tobecalled(){
    console.log("im called");
}
function tobecalled1(){
    console.log("im called 1");

}
function test(cb){
    console.log("im test function");
    cb();
}
 

// test(tobecalled);
// test(tobecalled1);
   
var p = 50;
if(p == 20){
    test(tobecalled);
} 
else{
    test(tobecalled1);
}