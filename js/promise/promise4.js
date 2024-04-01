const Exam = ()=>{
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept({
                exmaid : 1001,
                examname : "java",
                marks : 90
            })
        },5000)
    })
}

const result = (Examdetails)=>{
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept({
                exmaid : Examdetails.exmaid,
                examname : Examdetails.examname,
                marks : Examdetails.marks,
                result : "pass"
            })
        },3000)
    })
}

console.log("Exam is being conducted");
Exam().then((Examdetails)=>{
    console.log("Exam finished",Examdetails);
    result(Examdetails).then((Examdetails)=>{
        console.log("result",Examdetails);
    })
})