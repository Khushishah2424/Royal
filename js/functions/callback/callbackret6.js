function goa(name,amt){
    console.log("goa");
    return "hi" + name + "your goa tour amt is " + amt;
}
function ams(name,amt){
    console.log("ams");
    return "hi" + name + "your ams tour amt is " + amt;
}
function vacation(cb,name,amt){
    var x = cb(name,amt);
    console.log(x);
}
var price = 11000;
if(price>=11000){
    vacation(ams,"amit",amt)
}
else if(price>=8000){
    vacation(goa,"raj",amt);
}
else{
    console.log("poor");
}