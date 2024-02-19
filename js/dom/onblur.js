function checkInput(){
    var emaildata = ["samir@gmail.com","ram@gmail.com","parth@gmail.com"];
    var email = document.getElementById("email");
    var emailerror = document.getElementById("Emailerror");
    console.log(email.value);

    if(emaildata.includes(email.value)){
        emailerror.innerHTML = "Email Already Taken";
    }
    else{
        emailerror.innerHTML = "Email is Available";
    }
}