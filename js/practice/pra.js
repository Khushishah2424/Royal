// var num1 = parseInt(prompt("Enter num: "));
// var sen = prompt("Enter string :");
// document.write("num = ",num1);
// document.write("sen = ",sen);

function addition(){

    var a = document.getElementById("add");
    var num1 = parseInt(prompt("Enter num: "));
    document.write("<br>",num1);
    var num2 = parseInt(prompt("\nEnter num: "));
    document.write("<br>",num2);
    var sum = num1+num2;
    document.write("<br>Addition",sum);

}

function substarction(){
    var a = document.getElementById("sub");
    var num1 = parseInt(prompt("\nEnter num: "));
    document.write("<br>",num1);
    var num2 = parseInt(prompt("\nEnter num: "));
    document.write("<br>",num2);
    var sub = num1-num2;
    document.write("<br>Addition",sub);

}


