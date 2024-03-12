var date = new Date();
console.log(date);

console.log("getdata",date.getDate());
console.log("getday",date.getDay());
console.log("getyear",date.getFullYear());
console.log("gethours",date.getHours());
console.log("getmili",date.getMilliseconds());
console.log("getmin",date.getMinutes());
console.log("getsec",date.getSeconds());
console.log("gettime",date.getTime());


var date2 = new Date();
date2.setDate(14);
date2.setFullYear(2024);
date2.setHours(1);
date2.setMinutes(30);
date2.setSeconds(33);

console.log("date2 = ",date2)

var date3 = new Date();
console.log("gettimezone",date3.getTimezoneOffset());

console.log("getUTCdata",date.getUTCDate());
console.log("getUTCday",date.getUTCDay());
console.log("getUTCyear",date.getUTCFullYear());
console.log("getUTChours",date.getUTCHours());
console.log("getUTCmili",date.getUTCMilliseconds());
console.log("getUTCmin",date.getUTCMinutes());
console.log("getUTCsec",date.getUTCSeconds());









