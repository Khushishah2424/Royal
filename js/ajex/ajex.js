const getdatafromfile = () =>{
    const output = document.getElementById("output");
    //xhr = new XMLHttpRequest();
    const xhr  = new XMLHttpRequest()
    xhr.open("GET","../th.txt",true)
    xhr.send();
    xhr.onload = ()=>{
        output.innerHTML = xhr.responseText;
        console.log(JSON.parse(xhr.responseText));
    }
}