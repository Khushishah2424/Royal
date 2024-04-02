const playvideo = ()=>{
    console.log("play video is in progress");
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                status : "success",
                video : "abc.mp4",
                price : 100,
            })
        },3000)
    })
}

const payment = (videodata)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve({
                status : "success",
                video : videodata.video,
                payment : "done",
            })
        },2000)
    })
}

const youtube = ()=>{
    playvideo().then((vdata)=>{
        console.log(vdata);
        payment(vdata).then((data)=>{
            console.log(data)
        })
    })
}

youtube()