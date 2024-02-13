function changeImage(){

    var image = document.getElementById('image');
    image.style.height = "350px";

}

function changeColor(){

    var colors = ["red", "blue", "green", "yellow", "orange", "purple", "pink", "black", "white"];
    console.log(colors[Math.floor(Math.random() * colors.length)])
    console.log(Math.floor(Math.random() * colors.length))
    var color = colors[Math.floor(Math.random() * colors.length)];
    document.getElementById('mydiv').style.backgroundColor = color;

    //console.log("change color");
}