function calling(){
    console.log("calling");
    return 100;
}
function sms(){
    console.log("sms");
    return "hi message from siri";
}
function call(cb){
    var x = cb();
    console.log(x);
}
call(calling);






