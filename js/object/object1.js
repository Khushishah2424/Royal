var user = {id:1,name:"jhon Doe",age:24};

var newdata = Object.assign(user,{status :'active',age:30});
console.log(newdata);

var key = Object.keys(user);
console.log(key);

var values = Object.values(user);
console.log(values);

// Object.freeze(user);
// user.age = 36;
// console.log(user);


// Object.seal(user);
// Object.assign(user,{age:36},{email:raj});
// console.log(user);

// Object.defineProperty(user,'email',{
//     value:"raj@gmail.com",
// })
console.log(user);

Object.defineProperties(user,{
    email: {
        value: 'mm'
    },
    phone: {
        value: '456789'
    }
})

console.log(user);


p
