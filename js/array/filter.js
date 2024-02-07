//filter will return based on condition

var data = ["raj","amit","kunal","parth","amit","raj"];

//to check length

var fildata = [];
for(let i = 0 ; i< data.length ;i ++){
    if(data[i].length > 4){
        fildata.push(data[i]);
    }
}
console.log(fildata);

//filter

var filterdata = data.filter((d)=>{
    return d.length > 4;
})
console.log(filterdata);

