function storedata(){
    localStorage.setItem("name","ajay");
    localStorage.setItem("token","asdfgd");
    
    sessionStorage.setItem("name","raj");


    var user = {
        id:1,
        name:"kunal",
    }
    localStorage.setItem("user",JSON.stringify(user));

}

function removedata(){
    // localStorage.removeItem("name");
    // localStorage.removeItem("token");
    localStorage.clear();
    sessionStorage.clear();
}
function getdata(){
    var name = localStorage.getItem("name");
    console.log("name...",name);
    var name = sessionStorage.getItem("name");
    console.log("name...",name);
    var userStr = localStorage.getItem("user");
    console.log("user str..",userStr)
        console.log(userStr[0])
        var user = JSON.parse(userStr)
        console.log("user...",user)
        console.log(user.name)

}