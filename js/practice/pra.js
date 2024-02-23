function display(){
    var email = document.getElementById("email");
    var emailerror = document.getElementById("emailerror");
    var name = document.getElementById("name");
    var nameerror = document.getElementById("nameerror");
    var lname = document.getElementById("lname");
    var lnameerror = document.getElementById("lnameerror");
    var output = document.getElementById("output");
    if(email.value.indexOf("@") == -1){
        emailerror.innerHTML = "invlaid , please try again";
        email.style.outline = "2px solid red";

    }
    if(name.value.length<=3){
        name.style.outline = "2px solid red";
        nameerror.innerHTML = "Atleast 3 letters";
    }

   



    output.innerHTML = "Email: " + email.value + "<br>Name: " + name.value + "<br>Last Name: " + lname.value;
}


// function display() {
//     var email = document.getElementById("email");
//     var name = document.getElementById("name");
//     var nameerror = document.getElementById("nameerror");
//     var lname = document.getElementById("lname");
//     var output = document.getElementById("output");

//     // Clear previous error message/style
//     nameerror.innerHTML = "";
//     name.style.outline = "";

//     // Validate name length
//     if (name.value.length <= 3) {
//         name.style.outline = "2px solid red"; // Highlight the name input field
//         nameerror.innerHTML = "Name must be longer than 3 characters."; // Display error message
//         return; // Exit the function to avoid displaying the inputs if there's an error
//     }

//     // Display the input values
//     output.innerHTML = "Email: " + email.value + "<br>Name: " + name.value + "<br>Last Name: " + lname.value;
// }
