const adduser = async(user)=>{
    console.log("string...",JSON.stringify(user));
    const res = await fetch("https://node5.onrender.com/user/user",{
        method :"POST",
        body:JSON.stringify(user),
        headers:{
            "Content-Type":"application/json"
        }
    })
    const data = await res.json();
    console.log(data);
}



const submithandler = (event)=>{
    event.preventDefault();
    const name = document.getElementById("name").value;
    const age = document.getElementById("age").value;
    const email = document.getElementById("email").value;
    const isActice = document.getElementById("status").checked
    
    const user = {
        name:name,
        age:age,
        email:email,
        isActice : isActice,
    }
    console.log(user);
    adduser(user);
}