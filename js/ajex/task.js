const checkemail = ()=>{
    var email = document.getElementById("email").value;
    var password = document.getElementById("password").value;
    const xhr = new XMLHttpRequest();
    xhr.open("GET","..user.json",true);
    xhr.send();
    xhr.onload = ()=>{
        
    }
}