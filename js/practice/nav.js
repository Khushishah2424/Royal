const productArray = ["ihphone","ipad","mac"]

function displayDrop(e){
    console.log(e)
    const data = e.target.getAttribute('data-value')
    console.log(data);
    if(data === "product"){
        var ul = document.createAttribute('ul');
        var div = document.getElementById("prodiv")
            for(let i = 0 ; i < productArray.length ;i++){
                var li = document.createElement('li');
                li.innerHTML = productArray[i];
                ul.appendChild(li)
                console.log(productArray[i]);
            }
            prodiv.appendChild(ul);
        }
}