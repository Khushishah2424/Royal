var data =[
    {
        course: "HTML",
        students: [
            {
                id:101,
                name:"Rajan",
                age:21,
                gender:"male",
                marks:80
            },
            {
                id:102,
                name:"Parth",
                age:22,
                gender:"male",
                marks:70

            }
        ]
    },

    {
        course: "CSS",
        students: [
            {
                id:101,
                name:"Rajvi",
                age:21,
                gender:"female",
                marks:60
            },
            {
                id:102,
                name:"Partvi",
                age:20,
                gender:"female",
                marks:90

            },
            {
                id:103,
                name:"Ajay",
                age:22,
                gender:"male",
                marks:70
            }
        ]
    },
]

const htmlsudents = data.find((d)=>d.course == "HTML").students
console.log(htmlsudents);

const CSSstudent = data.find((d)=>d.course == "CSS").students.filter((stu)=>stu.gender == "female");
console.log(CSSstudent);

const totalcssmarks = data.find((d)=>d.course == "CSS").students.reduce((total,stu)=>total+stu.marks,0);
console.log(totalcssmarks);

const htmlstufil = data.find((d)=>d.course == "HTML").students.filter((stu)=>stu.age<22 && stu.gender);
console.log(htmlstufil);


    