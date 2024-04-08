let cmode = "light";
document.getElementById("modebtn").addEventListener("click",()=>{
    if(cmode ===  "light"){
        cmode = "dark";
        document.querySelector("body").classList.add("dark");
        document.querySelector("body").classList.remove("light");
    }
    else{
        cmode = "light";
        document.querySelector("body").classList.add("light");
        document.querySelector("body").classList.remove("dark");
        
q
    }
    console.log(cmode);
})
