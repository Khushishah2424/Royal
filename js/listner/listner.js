document.getElementById("btn").addEventListener("click",()=>{
    console.log("button clicked");
})
document.getElementById("btn").addEventListener("mouseover",()=>{
    document.getElementById("btn").style.backgroundColor = "red";
})

document.getElementById("btn").addEventListener("dblclick",()=>{
    document.getElementById("btn").innerHTML = "Double clicked";
})

    