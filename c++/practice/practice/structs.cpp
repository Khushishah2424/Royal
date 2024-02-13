// #include<iostream>
// using namespace std;

// struct Rectangle
// {
//     int height, width;
// };

// int main(){
//     struct Rectangle rec;
//     rec.width = 10;
//     rec.height = 20;
//     cout<<rec.width*rec.height;
// }


#include <iostream>    
using namespace std;    
 struct Rectangle    {      
   int width, height;      
  Rectangle(int w, int h)      
    {      
        width = w;      
        height = h;      
    }      
  void areaOfRectangle() {       
    cout<<"Area of Rectangle is: "<<(width*height); 
    }      
 };      
int main(void) {    
    struct Rectangle rec=Rectangle(4,6);    
    rec.areaOfRectangle();    
   return 0;    
}  
