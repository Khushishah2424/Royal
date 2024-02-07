// 4.Get & print integer , float(real) and character.
// #include<iostream>
// using namespace std;
// class first{
// public:
//     char c;
//     int i;
//     float f;
// };
// int main(){
//     first f;
//     cout<<"Enter a character :\n";
//     cin>>f.c;
//     cout<<"Enter a Integer :\n";
//     cin>>f.i;
//     cout<<"Enter a real number/decimal number :\n";
//     cin>>f.f;
//     cout<<"\n\tCharacter = " << f.c;
//     cout<<"\n\tInteger = " << f.i;
//     cout<<"\n\tReal number/ Decimal number = " << f.f;
// }

// 5. WAP of Sum & Average of 3 numbers

// #include<iostream>
// using namespace std;

// class sum_avg {
// public:
//     int no1=10;
//     int no2=20;
//     int no3=30;
//     int i;
//     float sum = 0, avg;
// };

// int main() {
//     sum_avg sa;
    
//     sa.sum = sa.no1 + sa.no2 + sa.no3;
//     cout << "Sum = " << sa.sum;

//     sa.avg = sa.sum / 3.0; // Corrected the calculation for average
//     cout << "\nAvg = " << sa.avg;

//     return 0;
// }


// 6. WAP to find Areas & Circumference of various Shapes

// #include<iostream>
// using namespace std;

// class area_circum{
// public:
//     double circum, breath, height, area, radius;
// };
// int main(){
//      area_circum ac;
//      cout<<"\nEnter radius :";
//      cin>>ac.radius;
//      ac.area = 3.14 * ac.radius;
//      cout<<"\nArea = " << ac.area;

//      cout<<"\nEnter breath and height :\n";
//      cin>>ac.breath>>ac.height;
//      ac.area = 0.5 * ac.breath * ac.height;
//      cout<<"\nArea = " << ac.area;

//      ac.circum = 2 * 3.14 * ac.radius;
//      cout<<"\nCircum = " << ac.circum;
//     return 0;
// }

// 7.WAP to Get no. of seconds as input and find out Minutes, Hour & Remaining Seconds

// #include<iostream>
// using namespace std;

// class min_hour_sec{
// public:
//     int sec=0,min=0,hour=0,remsec=0;
// };

// int main(){
//     min_hour_sec mhs;
//     cout<<"\nEnter seconds :";
//     cin>>mhs.sec;
//     mhs.hour = mhs.sec / 3600;
//     mhs.min = (mhs.sec % 3600) / 60;
//     mhs.remsec = (mhs.sec % 3600)%60;
//     cout<<"\nHour is " << mhs.hour << "\nMin is " << mhs.min << "\nSec is " << mhs.remsec;

// }

// 8.WAP to find number of month, days from given no of days.


// #include<iostream>
// using namespace std;

// class months_day{
// public:
//     int d, days, m;
// };
// int main(){
//     months_day md;
//     cout<<"\n Enter no. of days :";
//     cin>>md.d;
//     md.m = md.d / 30;
//     md.days = md.d % 30;
//     cout<<"\nNo. of month = " << md.m;
//     cout<<"\nNo. of days = " << md.days;
//     return 0;
// }

// 9.WAP to find SIMPLE Interest. SI = (P * R * N) / 100
// #include<iostream>
// using namespace std;

// class Simple_int{
// public:
//     float p,r,n;
//     float SI;
// };
// int main(){
//     Simple_int si;
//     cout<<"\n Enter principle amount :";
//     cin>>si.p;
//     cout<<"\n Enter Rate of Interest :";
//     cin>>si.r;
//     cout<<"\n Enter No. of years :";
//     cin>>si.n;
//     si.SI = ((si.p*si.r*si.n)/100);
//     cout<<"\n Simple Interest is --> " << si.SI;
//     return 0;
// }

// 10. WAP to Interchange or SWAP two numbers using third

// #include<iostream>
// using namespace std;
// class change_swap{
// public:
//    int a,b,c;
// };
// int main(){
//     change_swap cw;
//     cout<<"Enter the value of a : ";
//     cin>>cw.a;
//     cout<<"Enter the value of b : ";
//     cin>>cw.b;
//     cw.c = cw.a;
//     cw.a = cw.b;
//     cw.b = cw.c;
//     cout<<"\nAfter swap the value of a is:" << cw.a;
//     cout<<"\nAfter swap the value of b is:" << cw.b;
//     return 0;
// }

// 11. WAP TO FIND Net Pay and Gross Pay from

// #include<iostream>
// using namespace std;
// class net_gross{
// public:
//     float basic,da,hra,gp,pf,np;
// };
// int main(){
//     net_gross ng;
//     cout<<"\n Enter the basic salary :";
//     cin>>ng.basic;
//     ng.da = ((ng.basic * 4)/100);
//     ng.hra=((ng.basic*10)/100);
//     cout<<"\n Net Pay is " << ng.da;
//     cout<<"\n HRA is " << ng.hra;
//     ng.gp=ng.basic+ng.da+ng.hra;
//     ng.pf=((ng.basic*9)/100);
//     ng.np=ng.gp-ng.pf;
//     cout<<"\n Net Pay is " << ng.np;
//     cout<<"\n Gross Pay is " << ng.gp;
// }

// 13. WAP to find out whether given no. is odd or even.
// ( using IF )

// #include<iostream>
// using namespace std;
// class odd_even{
// public:
//     int num;
// };
// int main(){
//     odd_even oe;
//     cout<<"Enter the num:";
//     cin>>oe.num;
//     if(oe.num%2 == 0){
//         cout<< oe.num <<" is Even";
//     }
//     else{
//           cout<< oe.num <<" is Odd";
//     }
//     return 0;
// }

// 14. WAP to find out whether given no. is positive or
// negative.

// #include<iostream>
// using namespace std;
// class pos_neg{
// public:
//     int num;
// };
// int main(){
//     pos_neg pn;
//     cout<<"Enter the num:";
//     cin>>pn.num;
//     if(pn.num >= 1){
//         cout<<pn.num<<" is Positive";
//     }
//     else{
//         cout<<pn.num<<" is Negative";
//     }
//     return 0;
// }

// 15. WAP to find out maximum. ( using IF .. else if …
// else if …. Else … )
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int a,b;
// clrscr();
// printf("\n Enter two no's : ");
// scanf("%d%d",&a,&b);
// if(a>b)
// printf("a is max");
// else if(b>a)
// printf("b is max");
// else
// printf("both are same");
// getch();
// }

// #include<iostream>
// using namespace std;
// class maximum{
// public:
//     int a,b;
// };
// int main(){
//     maximum m;
//     cout<<"Enter the two number:\n";
//     cin>>m.a>>m.b;
//     if(m.a > m.b){
//         cout<<"a is max";
//     }
//     else if(m.b > m.a){
//         cout<<"b is max";
//     }
//     else{
//         cout<<"both are same";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
class swap_var{
public:
    int a,b;
};
int main(){
    swap_var s;
    cout<<"enter two numebers:\n";
    cin>>s.a>>s.b;
    cout<<"a = "<<s.a << "\nb = "<<s.b;
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
    cout << "\nAfter swapping:\n";
    cout << "First number: " << s.a << "\n";
    cout << "Second number: " << s.b << "\n";    
    return 0;
}
