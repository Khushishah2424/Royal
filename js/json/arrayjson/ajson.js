var students = [
    {
        id : 101,
        name : "raj",
        age: 22,
        subject: ["Maths","Science","Eco"]
    },
    {
        id : 102,
        name : "kiran",
        age: 24,
        subject: ["Science","Eco"]
    },
    {
        id : 103,
        name : "parth",
        age: 19,
        subject: ["Maths","Science","Eco"]
    },

]

// simple

for(let i = 0 ; i < students.length;i++){
    // console.log(students[i]);
    console.log(students[i].name);
}

//foreach

students.forEach((stu)=>{
    console.log(stu.id);
})

//map

var studentsname = students.map((stuname)=>{
    return stuname.age;
})
console.log(studentsname);


//new object with map

var newobstudent = students.map((stu)=>{
    return(
        {
            StudentId : stu.id - 100,
            name:stu.name.toUpperCase(),
            age:stu.age + 10
        }
    )
})
console.log(newobstudent);

//nested json array - for each
students.forEach((stu)=>{
    console.log(stu)
    stu.subject.forEach((sub)=>{
        console.log(sub);
    })
})

//nested json array - map
var newobstudent1 = students.map((stu)=>{
    return({
          name:stu.name.toUpperCase(),
          subject:stu.subject.map((sub)=>{
            return sub.toUpperCase();
          })
    })
})
console.log(newobstudent1);


var newobstudent1 = students.map((stu)=>{
    return(
        {
            name:stu.name.toUpperCase(),
            subject:stu.subject[0].toUpperCase()
        }
    )
})
console.log(newobstudent1);



