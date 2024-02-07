function science(){
    console.log("im science student");
}
function commerce(){
    console.log("im commerce student");
}
function arts(){
    console.log("im arts student");
}
function addmission(callabck){
    callabck();
}
var per = 80;
if(per>=80){
    addmission(science);
}
else if(per>=60){
    addmission(commerce);
}
else{
    addmission(arts);
}