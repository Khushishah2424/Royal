function getdata(){
    var txt = document.getElementById("txt")
    console.log(txt)
    txt.innerHTML = "HELLO WORLD!";
    txt.style.color = "Red";
}

function changelink(){
    var link = document.getElementById("link")
    console.log(link);
    link.href = "http://www.netflix.com";
    link.innerHTML = "Netflix"
    link.target = "_blank"
}

function getdiv(){
    var mydiv = document.getElementById("mydiv")
    mydiv.className ="box"
}

function changediv(){
    var dbl = document.getElementById("mydiv")
    mydiv.className = "box1";
}


