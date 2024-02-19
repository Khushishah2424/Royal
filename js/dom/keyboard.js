function getInput(){
    var name = document.getElementById("name");
    var namerror = document.getElementById("nameError");
    var output = document.getElementById("output");
    console.log(name);
    if(name.value.length<=3){
        namerror.innerHTML = "Name must be atleast 3 char";
        name.style.outline = "1px solid red";
    }
    else{
        namerror.innerHTML = "";
        name.style.outline = "1px solid green";
        output.innerHTML = "Hello " + name.value;
    }

   
}