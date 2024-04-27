const getAPIdemo1 = async()=>{
    const res = await fetch("https://reqres.in/api/users?page=2",{
        method :"GET",
    });
    
    const data = await res.json();
    console.log(res);
    console.log(data);
    console.log(data.data);
    console.log(data.page);

}


const getAPTdemo2 = async ()=>{
    const res =  await fetch("https://dummy.restapiexample.com/api/v1/employees",{
        method : "GET",
    })

    const data = await res.json();
    console.log(res);
    console.log(data);

    
}

const getAPIdemo3 = async ()=>{
    const res = await fetch("https://jsonplaceholder.typicode.com/posts",{
        method : "GET",
    })
    const data = await res.json();
    console.log(res)
    console.log(data);
}


// getAPIdemo1();
// getAPTdemo2();
getAPIdemo3();