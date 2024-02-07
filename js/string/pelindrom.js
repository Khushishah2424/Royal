var data = "naman"
var temp = ""
for(let i = data.length-1 ; i>=0  ; i--)
{
    console.log(data[i])
    temp = temp + data[i]
}
console.log(temp)
if(temp == data){
    console.log("pelindrome")
}
else{
    console.log("not pelindrome")
}