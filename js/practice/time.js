function time(){

    const n = new Date();
    let hours = n.getHours();
    let minutes = n.getMinutes();
    let seconds = n.getSeconds();
    console.log(hours);
    console.log(minutes);
    console.log(seconds);

    const time = `${hours}:${minutes}:${seconds}`;
    document.getElementById("currentime").innerHTML = time;
}
setInterval(time,1000);
