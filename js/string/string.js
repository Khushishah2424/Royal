var userName = "rama krishna";
console.log("userName = ", userName);
console.log("type of userName = ", typeof userName);
console.log("length of userName = ", userName.length);
// console.log("index 0 of userName = ",userName[0])
// console.log("index 1 of userName = ",userName[1])
// console.log("index 2 of userName = ",userName[2])

for (let i = 0; i < userName.length; i++) {
  //console.log("index "+i+" of userName = ",userName[i])
  console.log("index = ", i, " userName = ", userName[i]);
}


//string mutable

userName[0] = "R";
console.log("userName = ", userName);