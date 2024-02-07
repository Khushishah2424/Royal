var lang = ["English","Hindi","Gujarati","telugu","Panjabi"];
console.log(lang);
// lang.splice(1,2);
// lang.splice(1,1,"Bengaali");
// lang.splice(3,0,"Bengaali");
// var remove = lang.splice(2,3,"Kannad");
// console.log(" Removing element is"+ remove);
// console.log(lang);
// console.log(remove);

var x = lang.some((l)=>{
    // return l.length > 5;
    // return l.startsWith("E");
    return l.length>4
    return l.startsWith("k");
})
console.log(x);

var y = lang.every((l)=>{
    return l.length>10
    return l.startsWith("k");

})
console.log(y);