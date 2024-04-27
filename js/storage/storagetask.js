const products = [
    {
        id: 1,
        name: "Ihphone",
        price: 200,
        description: "Iphone 15",
    },
    {
        id: 2,
        name: "Samsung",
        price: 180,
        description: "Galaxy",
    },
    {
        id: 3,
        name: "Lenovo",
        price: 100,
        description: "Lenovo Legion",
    },

];

const loadProducts = () => {
    var productContainer = document.getElementById("container");
    for (let i = 0; i < products.length; i++) {
        const prodiv = document.createElement("div");
        prodiv.className = "product";

        const proInfo = document.createElement("div");
        proInfo.className = "product-info";

        const title = document.createElement("h2");
        title.innerHTML = products[i].name;
        const price = document.createElement("p");
        price.innerHTML = "Price: " + products[i].price;
        const description = document.createElement("p");
        description.innerHTML = "Description: " + products[i].description;

        const cartButton = document.createElement("button");
        cartButton.innerHTML = "Add to Cart";
        cartButton.className = "btn btn-primary";
        cartButton.addEventListener("click", () => {
            localStorage.setItem("product" + products[i].id, JSON.stringify(products[i]));
        });

        proInfo.appendChild(title);
        proInfo.appendChild(price);
        proInfo.appendChild(description);
        proInfo.appendChild(cartButton);

        prodiv.appendChild(proInfo);
        productContainer.appendChild(prodiv);
    }
};
