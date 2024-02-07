var marks = [13,34,566,78,3,4,0,456,34,56,7,8,];
console.log(marks);
function sortbylen(a,b){
    return a - b;
}

marks.sort(sortbylen);
console.log(marks);

marks.sort((a,b)=> a- b);
console.log(marks);
