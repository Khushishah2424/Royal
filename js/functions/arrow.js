const sum = (a,b) =>{
     return a+b;
}
var ans = sum(10,20)
console.log(ans)

const convert = (name) => name.toUpperCase();
var name1 = convert("ram")
console.log(name1);

const sname = (fname,lname) => fname + " " + lname;
var fullname = sname("Khushi","Shah")
console.log(fullname)
 
age = 18
// function usage(age){
//     if(age>=18){
//         return true
//     }
//     else{
//         return false
//     }
// }
// var ans = usage(age);
// console.log(ans)

var isValid = (uage) => uage>=18 ? true : false
var ans = isValid(age)
console.log(ans);


const findMax = (x,y)=> x>y?x : y
var no1 = 10
var no2 = 20
var max = findMax(no1,no2)
console.log(max);


var sub1 = 60;
var sub2 = 70;
var sub3 = 89;
const findgrade = (sub1,sub2,sub3)=> (sub1+sub2+sub3)/3 > 70 ? "A" : (sub1+sub2+sub3)/3 ? "B" : "C"
var ans = findgrade(sub1,sub2,sub3);
console.log(ans)


var isEligible1 = (alive,age) => alive == true ? age >= 18 ? ">18" : "<18" : "dead"
var x = isEligible1(false,19)
console.log(x);


