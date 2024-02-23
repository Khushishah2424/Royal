function submithandler(event){
    event.preventDefault();
    console.log("Form submitted")
    const name = document.getElementById("name").value;
    const email = document.getElementById("email");
    const age = document.getElementById("age").value;

    const nameerror = document.getElementById("nameerror")
    const emailerror = document.getElementById("emailerror")
    const ageerror = document.getElementById("ageerror")

    const result  = document.getElementById("result")
    flag = true




    if(isempty(name)){
        nameerror.innerHTML = "Name is required";

        flag = false;
    }
    else{
        nameerror.innerHTML = "";
    }

    if(isempty(age)){
        ageerror.innerHTML = "age is required";
        flag = false;
    }
    else{
        ageerror.innerHTML = "";
        if(age<18){
            ageerror.innerHTML = "age should be greater than 18"
            flag = false;
        }
        else{
            ageerror.innerHTML = "";
        }
    }

    if(isempty(email.value)){
        emailerror.innerHTML = "email is required";
        email.style.outline = "2px solid red"
        flag = false;
    }
    else{
        emailerror.innerHTML = "";
    }


    if(flag){

        result.innerHTML = `Name: ${name} <br> Age: ${age} <br> Email: ${email}`;
       
  }


}

const isempty = (p) =>
{
    if(p === "" || p === null || p=== undefined){
        return true;
    }
    else{
        return false;

    }
   
};