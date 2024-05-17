const weather = async (city)=>{
    const url =`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=fe4feefa8543e06d4f3c66d92c61b69c`;
    const res = await fetch(url,{
        method : "GET",
    })
    const data = await res.json();
    console.log(data);

    const weathercity = document.getElementById("weathercity");
    weathercity.innerHTML = data.name;
    const temp = document.getElementById("temp");
    temp.innerHTML =  (data.main.temp - 273.15).toFixed(2) + '°C';
    const min = document.getElementById("min");
    min.innerHTML = (data.main.temp_min - 273.15).toFixed(2);
    const max = document.getElementById("max");
    max.innerHTML = (data.main.temp_max - 273.15).toFixed(2);

}
const submithandler = (event) =>{
    event.preventDefault();
    const cityId = document.getElementById("cityId");
    weather(cityId.value);
} 

