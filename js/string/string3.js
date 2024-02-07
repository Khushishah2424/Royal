var empName = "amit"

console.log("name...",empName) // 4
empName = empName.toUpperCase() // "AMIT"
console.log("name...",empName) // 4
empName = empName.toLowerCase() // "amit"
console.log("name...",empName) // 4

var email = "raj@gmial.com"
console.log("length.." , email.length)
console.log("before trim..",email)

email = email.trim()
console.log("len...",email.length)
console.log("after trim ...email...",email)

var email1 = "  raj@gmail.com  "
console.log("len...",email1.length)
console.log("before trim ...email1...",email1)

email1 = email1.trimEnd()
console.log("len...",email1.length)
console.log("after trim ...email1...",email1)

email1 = email1.trimStart()
console.log("len...",email1.length)
console.log("after trim ...email1...",email1)
