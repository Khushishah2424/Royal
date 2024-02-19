// // // #include <iostream>  
// // // using namespace std;  
// // //  class Animal {  
// // //    public:  
// // //     void eat() {   
// // //     cout<<"Eating..."<<endl;   
// // //  }    
// // // };  
// // //    class Dog: public Animal    
// // //    {    
// // //        public:  
// // //      void bark(){  
// // //     cout<<"Barking...";   
// // //      }    
// // //    };   
// // // int main(void) {  
// // //     Dog d1;  
// // //     d1.eat();  
// // //     d1.bark();  
// // //     return 0;  
// // // } 


// // #include <iostream>  
// // using namespace std;  
// //  class Animal {  
// //    public:  
// //  void eat() {   
// //     cout<<"Eating..."<<endl;   
// //  }    
// //    };  
// //    class Dog: public Animal   
// //    {    
// //        public:  
// //      void bark(){  
// //     cout<<"Barking..."<<endl;   
// //      }    
// //    };   
// //    class BabyDog: public Dog   
// //    {    
// //        public:  
// //      void weep() {  
// //     cout<<"Weeping...";   
// //      }    
// //    };   
// // int main(void) {  
// //     BabyDog d1;  
// //     d1.eat();  
// //     d1.bark();  
// //      d1.weep();  
// //      return 0;  
// // }

// #include <iostream>  
// using namespace std;  
// class A  
// {  
//     protected:  
//      int a;  
//     public:  
//     void get_a(int n)  
//     {  
//         a = n;  
//     }  
// };  
  
// class B  
// {  
//     protected:  
//     int b;  
//     public:  
//     void get_b(int n)  
//     {  
//         b = n;  
//     }  
// };  
// class C : public A,public B  
// {  
//    public:  
//     void display()  
//     {  
//         std::cout << "The value of a is : " <<a<< std::endl;  
//         std::cout << "The value of b is : " <<b<< std::endl;  
//         cout<<"Addition of a and b is : "<<a+b;  
//     }  
// };  
// int main()  
// {  
//    C c;  
//    c.get_a(10);  
//    c.get_b(20);  
//    c.display();  
  
//     return 0;  
// } 

#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void displayA()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void displayB()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  
class C : public A, public B  
{  
    void view()  
    {  
        displayA(); 
        displayB();  

    }  
};  
int main() 
{  
    C c;  
    c.displayA();  
    return 0;  
}  


