function whattsup(){
    console.log("Msg from whattsup")
}
function sms(){
    console.log("Msg from Sms")
}
function call(){
    console.log("Msg from calll")
}
function mobile(cb){
    cb();
}
mobile(whattsup);
mobile(sms);
mobile(call);
