function cal(x,y){
    function add(a,b){
        console.log(a+b);
    }
    add(x,y);
}
cal(10,20);


function outer(){
    console.log("im outer function");
    function inner(){
        console.log("im inner function");
    }
    inner();
}
outer();


