const getdata = ()=>{
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept("Data received");
        },2000)
    })
}

async function fetchdata(){
    console.log("fetch data called");
    const data = await getdata();
    console.log("data = ",data);
    console.log("fetch data end");
}
fetchdata();