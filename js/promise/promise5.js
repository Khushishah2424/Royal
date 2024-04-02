const generateQuestions = ()=>{
    console.log("Questions are being generated ");
    return new Promise((accept,reject)=>{
        setTimeout(()=>{
            accept(['Q1','Q2','Q3'])
        },3000)
    })
}

const generateAnswers = ()=>{
    generateQuestions().then((data)=>{
        for(let i = 0 ; i < data.length ; i++){
            console.log("Ansers for ",data[i]);
        }
    })
}
generateAnswers();