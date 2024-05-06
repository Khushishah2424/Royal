const readjson = ()=>{
    const output = document.getElementById("output");
    const xhr = new XMLHttpRequest();
    xhr.open("GET","../user.json",true);
    xhr.send();
    xhr.onload = ()=>{
        console.log(JSON.parse(xhr.responseText));
        output.innerHTML = xhr.responseText; 
    }
}
readjson();