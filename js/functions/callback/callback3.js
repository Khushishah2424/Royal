function science(name){
    console.log("im science student",name);
}
function commerce(name){
    console.log("im commerce student",name);
}
function arts(name){
    console.log("im arts student",name);
}
function addmission(callabck){
    callabck("amit");
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