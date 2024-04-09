const generatedSongs = ()=>{
    console.log("generatingSongs called");
    const songs = [
        {title: 'song1', duration: 4},
        {title: 'song2', duration: 3},
        {title: 'song3', duration: 5},
    ]

    return new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve(songs);
        },2000)
    })
}


const creatplaylist = (songs)=>{
    console.log("Create Playlist");
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept({
                message:"playlist",
                songs : songs
            })
        },2000)
    })
}

const playsongs = async ()=>{
    console.log("playsong called");
    const songs = await generatedSongs();
    console.log("songs == ",songs);
    const playlist = await creatplaylist(songs);
    console.log("playlist",playlist);
}
playsongs();