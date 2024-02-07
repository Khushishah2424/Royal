const siri = (name) =>{
    console.log("siri");
    return name + "hi message from siri";
}
const alexa = (name) =>{
    console.log("alexa");
    return name + "hi message from alexa";
}
function call(cb){
    var x = cb("amit");
    console.log(x);
}
// call(alexa)
var choice  = "alexa";
switch(choice){
    case "siri":
        call(siri);
    break;
    case "alexa":
        call(alexa);
    break;
    default:
    console.log("invalid choice");

}
