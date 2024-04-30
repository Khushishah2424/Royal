const user = [
    {
        email:"raj@gmail.com",
        password:"raj123",
    },
    {
        email:"kriya124@gmail.com",
        password:"kriya124",
    },
    {
        email:"mohan45@gmail.com",
        password:"mohan45",
    },
]
function Loginpage(){
    var email = document.getElementById("email").value;
    var password = document.getElementById("password").value;

    console.log(email)
    console.log(password)

    var x = user.find((u)=>{
        return u.email === email && u.password === password
    })
    console.log(x);
    if(x === undefined){
        alert("Unsuccesfull");
        // document.cookie = email;
    }
    else{
        alert("log in");
    }

}

