// package practice;

import java.util.Scanner;

public class Email {
    private String First_name;
    private String Last_name;
    private String Passwrod;
    private String email;
    private String Department;
    private int MailboxCapacity;
    private String alternateEmail;

    public Email(String First_name,String Last_name){
        this.First_name = First_name;
        this.Last_name =  Last_name;
        System.out.println("Email Createdd : "+ this.First_name +" " + this.Last_name);

        this.Department = setDepartment();
        System.err.println("Department : " + this.Department);

        this.Passwrod = RandomPAssword(8);
        System.out.println("Your password is :"+this.Passwrod);

        email = First_name.toLowerCase() + Last_name.toLowerCase() + "@" + "Comapany.com";
        System.out.println("Your Email is = " + email);
    }

    private String setDepartment(){
        System.out.println("Enter the Department \n1.For sales\n2.For Developement\n3/For Accounting\n4.For none");
        Scanner sc = new Scanner(System.in);
        int depchoice = sc.nextInt();
        if(depchoice == 1){
            return "Sales";
        }
        else if(depchoice == 2){
            return "Developement";
        }
        else if(depchoice == 3){
            return "Accounting";
        }
        else{
            return "";
        }
    }

    public String RandomPAssword(int length){
        String setPAssord = "WERTYUIOPLKJHGFDSAZXCVBNM!@#$%^&*";
        char[] pwd = new char[length];
        for(int i = 0 ;i < length ;i++){
            int random = (int)(Math.random() * setPAssord.length());
            pwd[i] = setPAssord.charAt(random);
        }
        return new String(pwd);


    }


}
