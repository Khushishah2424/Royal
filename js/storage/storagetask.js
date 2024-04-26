var products = [
    {
        id:1,
        name:"Ihphone",
        price:200,
        discription:"Iphone 15",
    },
    {
        id:2,
        name:"Samsung",
        price:180,
        discription:"Galaxy",
    },
    {
        id:3,
        name:"Lenovo",
        price:100,
        discription:"lenevo ligion",
    },
]

const loadProducts = () =>{
    var  productContainer = document.getElementById("productContainer");
    for(let i = 0 ; i < products[i];i++){
        const prodiv = document.getElementById("div");
        prodiv.className = "product"
        const proInfo = document.getElementById("div");
        proInfo.className = "product-info";

        const title = document.createElement("h2");
        title.innerHTML = products[i].name
        const price = document.createElement("p");
        price.innerHTML = "Price: "+products[i].price
        const description =document.createElement("p")
        description.innerHTML = "Description: "+products[i].description

        const cartbutton = document.ATTRIBUTE_NODE.getElementById("button");
        cartbutton.innerHTML  = "Add to Cart";
        cartbutton.className = "btn btn-primary"
        cartbutton.addEventListener("click",()=>{
            localStorage.setItem("product",JSON.stringify(products[i]))
        })
        proInfo.appendChild(title)
        proInfo.appendChild(price)
        proInfo.appendChild(description)
        proInfo.appendChild(cartbutton)

        prodiv.appendChild(proInfo)
        productContainer.appendChild(prodiv)
    }
}