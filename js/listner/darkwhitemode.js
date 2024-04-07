let cmode = "light";
document.getElementById("modebtn").addEventListener("click",()=>{
    if(cmode ===  "light"){
        cmode = "dark";
        document.querySelector("body").style.backgroundColor = "black";
    }
    else{
        cmode = "light";
        document.querySelector("body").style.backgroundColor = "white";
    }
    console.log(cmode);
})
