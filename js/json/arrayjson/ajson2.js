var company = [
    {
      name: "Google",
      employees: [
        {
          id: 101,
          name: "Steve",
          age: 32,
          salary: 10000,
          designation: "Developer",
          gender: "male",
          isMarried: true,
          child: 2,
        },
        {
          id: 102,
          name: "Seeta",
          age: 29,
          salary: 1000,
          designation: "Developer",
          gender: "female",
          isMarried: false,
          child: 0,
        },
        {
          id: 103,
          name: "rima",
          age: 36,
          salary: 12000,
          designation: "Developer",
          gender: "female",
          isMarried: true,
          child: 1,
        },
      ],
    },
    {
      name: "Microsoft",
      employees: [
        {
          id: 101,
          name: "bill",
          age: 45,
          salary: 90000,
          designation: "Developer",
          gender: "male",
          isMarried: true,
          child: 2,
        },
        {
          id: 102,
          name: "sita",
          age: 29,
          salary: 1000,
          designation: "Developer",
          gender: "female",
          isMarried: false,
          child: 0,
        },
      ],
    },
  ];

//1. find all employees of google

// const findempgoogle = company.find((d)=>d.name == "Google").employees;
// console.log(findempgoogle);


//2 find all female employee of microsoft

// const microfemaleemp = company.find((d)=>d.name == "Microsoft").employees.filter((emp)=>emp.gender == "female");
// console.log(microfemaleemp);


//3) find all married employee of google

// const googlemarriedemp = company.find((d)=>d.name == "Google").employees.filter((emp)=>emp.isMarried == true);
// console.log(googlemarriedemp);


//4) find all employee whose salary is greater than 10000

const empsalary = company.filter((emp)=>emp.employees.filter((e)=>e.salary>10000));
console.log(empsalary);

//5) find all employee from microsoft who is having child

// const microempchild =  company.find((d)=>d.name == "Microsoft").employees.filter((emp)=>emp.child>0);
// console.log(microempchild);

//6)find female employee from google who is single

// const googleempfemale = company.find((d)=>d.name == "Google").employees.filter((emp)=>emp.isMarried == false);
// console.log(googleempfemale);



//const googleeme