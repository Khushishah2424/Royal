var users = ["ram","sita","gita","stuti","krisha","riya"];

var x = users.includes("hari");
console.log(x);


var x1 = users.find((u)=>{
    // return u == "hari";
    return u == "sita";

})
console.log(x1);

users.sort();
console.log(users);

function sortbylen(a,b){
    return a.length - b.length
}
users.sort(sortbylen);
console.log(users);