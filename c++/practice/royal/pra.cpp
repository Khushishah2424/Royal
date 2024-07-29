#include<iostream>
using namespace std;

class NumChecker 
{
    public:
    NumChecker(int num) 
    {
        cout<<"\n--------PRIME NUMBER CHECKER--------\n";
        cout << "\nEnter a number: ";
        cin >> num;
        bool isPrime = true;

        if (num <= 1) 
        {
            isPrime = false;
        } 
        else 
        {
            for (int i = 2; i <= num / 2; i++) 
            {
                if (num % i == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }


    NumChecker(int starting,int ending)
    {
        cout<<"\n---------------------------\n";
        cout<<"\n-------ODD NUMBER CHECKER----------\n";
        cout<<"\nEnter the Starting Number : ";
        cin>>starting;
        cout<<"\nEnter the Ending Number ; ";
        cin>>ending;

        for (int i = starting; i <= ending; i++)
        {
            if(i%2!=0)
            {
                cout<<"\n"<<i;
            }
        }
        
    }

    NumChecker(int num1)
    {
       int  remainder,temp,result=0;
        cout<<"\n---------------------------\n";
        cout<<"\n-----ARMSTRONG NUMBER--------\n";
        cout<<"\nEnter the Number : ";
        cin>>num1;

        temp = num1;
        while (num1 != 0)
        {
            remainder = num1 % 10;
            result += (remainder * remainder * remainder);
            num1 = num1/10;
        }
        cout<<"\nAnswer = "<<result<<endl;

        if(temp==result)
        {
            cout<<""<<temp<<" is Armstrong Number"<<endl;
        }
        else
        {
            cout<<""<<temp<<" is not Armstrong Number"<<endl;

        }
        
    }
};

int main() {
    int num,starting, ending,num1;

    NumChecker checker(num);
    NumChecker checker1(starting,ending);
    NumChecker checker2(num1);

    cout<<"\n\n";

    return 0;
}