function add(a,b){
    let c = a+b;
    return c;
}
var ans  = add(10,20);
console.log("Ans = "+ans);

function sub(a,b,c){
    let x = a-b-c;
    console.log("Sub = "+x);
}
sub(100,20,30) 

function getData(){
    return "Hi this is India"
}

var data = getData()
console.log("Data = ", data);

function test(){

    console.log("Test function called....");
    console.log("without return type and without arguments")

}
test()