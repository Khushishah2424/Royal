const generateimag = ()=>{
    const path = "..\\images\\"
    const image = ["rainy.jpeg","sunrise.jpeg","sunset-time.avif","winter.webp"];

    const randomIndex = Math.floor(Math.random()* image.length);
   console.log(path+image[randomIndex])
    var images = document.getElementById('images');
    images.src = path+image[randomIndex] 

}