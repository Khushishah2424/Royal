var lang = ["Gujrati","tamil","English","telugu"];
console.log(lang);
lang.push("Marathi");
console.log(lang);

var pop_ans = lang.pop("Marathi");
console.log("Deleted element is",pop_ans);
console.log(lang)

lang.unshift("Marathi");
console.log(lang)

lang.shift("marathi");
console.log(lang)

lang.forEach((l)=>{
    console.log(l)
})


