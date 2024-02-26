function submithandler(event){
    event.preventDefault();
    const id = document.getElementById("id");
    const name = document.getElementById("name");
    const age = document.getElementById("age");
    const salary = document.getElementById("salary");
    const blood = document.getElementById("blood");

    const iderror = document.getElementById("iderror");
    const nameerror = document.getElementById("nameerror");
    const ageerror = document.getElementById("ageerror");
    const salaryerror = document.getElementById("salaryerror");
    const blooderror = document.getElementById("blooderror");

    const result = document.getElementById("result");
    flag = true;

    if(isNull(id.value)){
        iderror.innerHTML = "Id is required";
        id.style.outline = "1px solid red";

        flag = false;
    }
    else{
        iderror.innerHTML = "";
        id.style.outline = "1px solid green";
    }

    if(isNull(name.value)){
        nameerror.innerHTML = "Name is required";
        name.style.outline = "1px solid red";
        flag = false;
    }
    else{
        nameerror.innerHTML = ""
        name.style.outline = "1px solid green";
    }


    if(isNull(age.value)){
        ageerror.innerHTML = "Age is required";
        age.style.outline = "1px solid red";
        flag = false;
    }
    else{

        if(age.value<18){
            ageerror.innerHTML = "Age should be grater than 18";
            age.style.outline = "1px solid red";
        }
        else{
            ageerror.innerHTML = "";
            age.style.outline = "1px solid green";
        }
       
    }


    if(isNull(salary.value)){
        salaryerror.innerHTML = "Salary is required";
        salary.style.outline = "1px solid red";
        flag = false;
    }
    else{
        salaryerror.innerHTML = "";
        if(salary.value<1800){
            salaryerror.innerHTML = "Salary should not be less than 1800";
            salary.style.outline = "1px solid red";
            flag = false;
        }
        else{
            salaryerror.innerHTML = "";
            salary.style.outline = "1px solid green";
        }
    }

    if(isNull(blood.value)){
        blooderror.innerHTML = "Blood-group is required";
        blood.style.outline = "1px solid red";
        flag = false;
    }
    else{
        blooderror.innerHTML = "";
        blood.style.outline = "1px solid green";
    }

    if(flag){
        result.innerHTML = `ID : ${id.value} <br> NAME : ${name.value} <br> AGE: ${age.value} <br> SALARY :  ${salary.value} <br>
        BLOOD - GROUP : ${blood.value}`;
    }


}
const isNull = (p) =>{
    if(p === "" || p === null || p === undefined){
        return true;
    }
    else{
        return false;
    }
};