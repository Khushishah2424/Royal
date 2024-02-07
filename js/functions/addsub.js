choice = prompt("Enter 1 for add  \n" + "Enter 2 for sub \n"+ "Enter 3 for mul \n"+ "Enter 4 for div \n")
function add(a,b){
    let c = a+b;
    return c;
}

function sub(a,b){
    let c = a-b;
    return c;
}
switch(choice){

    case "1":
        var a = parseInt(prompt("Enter a value"))
        var b = parseInt(prompt("Enter b value"))

        let ans = add(a,b)
        alert("addition  = " + ans)
    break;
    case "2":
        var a = parseInt(prompt("Enter a value"))
        var b = parseInt(prompt("Enter b value"))
        alert("sub = "+sub(a,b))
    break;        

    default:
        alert("Invalid choice")
    break;
}
