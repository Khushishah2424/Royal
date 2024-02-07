//reduce will return single value

var marks = [100,20,30,40]
ans = 0;

//simple

for(let i = 0 ; i < marks.length ; i++){
    ans = ans + marks[i];
}
console.log(ans);

//reduce

ans1 = marks.reduce((a,b)=>a+b)
console.log(ans1);
