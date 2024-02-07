const convert = (sname) =>{

    const checkname = (name) =>{
        if(name.length > 0){
            return true;
        }
        else{
            return false;
        }
    }
    var flag = checkname(sname);
    console.log(flag);
    if(flag == true){
        return sname.toUpperCase();
    }
    else{
        return "invlaid name";
    }
}
var ans = convert("raj");
console.log(ans);