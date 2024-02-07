//map will return same size of an array

var data = ["raj","amit","kunal","parth","amit","raj"];

data.map((d)=>{
    console.log(d);
})

//uppercase - simple

var upperdata = [];
for(let i = 0 ;i < data.length ; i++){
    upperdata.push(data[i].toUpperCase());
}
console.log(upperdata);

//with map

var uppercase = data.map((d)=>{
    return d.toUpperCase();
})
console.log(uppercase);


