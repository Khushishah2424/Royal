function getdata(dataid,getnextdata){
    setTimeout(()=>{
        console.log("Data",dataid);
        if(getnextdata){
            getnextdata();
        }
    },2000); 
}
getdata(1,()=>{
    getdata(2,()=>{
        getdata(3)
    });
});