// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// class Amazone{
//     public:
//     string pName;
//     int pQty;
//     int pPrice;
//     string pColor;

//     Amazone(){
//         this->pName = "NA";
//         this->pQty = 0;
//         this->pPrice = 0;
//         this->pColor = "NA";
//     }

//     bool addproduct(){
//         cout<<"Enter Product Name : ";
//         cin>>this->pName;
//         cout<<"Enter Product Price : ";
//         cin>>this->pPrice;
//         cout<<"Enter Product Qty : ";
//         cin>>this->pQty;
//         cout<<"Enter Product Color : ";
//         cin>>this->pColor;

//         return true;
//     }

//     void Showproduct(){
//         cout<<"Product Name : "<<this->pName<<endl;
//         cout<<"Product Price : "<<this->pPrice<<endl;
//         cout<<"Product Qty : "<<this->pQty<<endl;
//         cout<<"Product Color : "<<this->pColor<<endl;
//     }

//     void DeleteProduct(string pName , vector<Amazone> &products){
//         for(auto i = products.begin();i!=products.end();i++){
//             if(i->pName == pName){
//                 products.erase(i);
//                 cout<<"Products Deleted Succesfully"<<endl;
//                 break;
//             }
//         }
//     }

//     int updateProduct(string Pname , string name , vector<Amazone> &products){
//         string name , color;
//         int qty , price;
//         cout<<"Enter Product Name : ";
//         cin>>name;
//         cout<<"Enter Product Price : ";
//         cin>>price;
//         cout<<"Enter Product Qty : ";
//         cin>>qty;
//         cout<<"Enter Product Color : ";
//         cin>>color;
//         for(auto i = products.begin();i!=products.end();i++){
//             if(i->pName == pName){
                
//             }
//         }
//     }

// };

// int main(){
//     int choice;
//     vector<Amazone> products;
//     do{ 
//         int uName;
//         Amazone a;
//         cout<<"1. Add Product"<<endl;
//         cout<<"2. Show Product"<<endl;
//         cout<<"3. Delete Product"<<endl;
//         cout<<"5. Exit"<<endl;
//         cin>>choice;
//         switch(choice){
//             case 1:
//                 a.addproduct();
//                 products.push_back(a);
//                 break;
//             case 2:
//                 for(auto i:products){
//                     i.Showproduct();
//                 }
//                 break;
//             case 3: 
//                 cout<<"Product you Want to delete"<<endl;
//                 cin>>a.pName;
//                 a.DeleteProduct(a.pName,products);
//             case 4:
//                 cout<<"Product Update"<<endl;
//                 cin>>a.pName;
//                 a.updateProduct(a.pName,products);

//         }

//     }while(choice!=5);
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Amazon
{
public:
    string pName, pColor;
    int pPrice, pQty;
    Amazon()
    {
        this->pName = "NA";
        this->pPrice = 0;
        this->pColor = "NA";
        this->pQty = 0;
    }

    bool addProduct()
    {
        cout << "Enter Product Name: " << endl;
        cin >> this->pName;
        cout << "Enter Product Price: " << endl;
        cin >> this->pPrice;
        cout << "Enter Product Quantity: " << endl;
        cin >> this->pQty;
        cout << "Enter Product Color: " << endl;
        cin >> this->pColor;

        return true;
    }

    void display()
    {
        cout << "Product Name:" << this->pName << endl;
        cout << "Product Price:" << this->pPrice << endl;
        cout << "Product Quantity:" << this->pQty << endl;
        cout << "Product Color:" << this->pColor << endl;

        cout << endl;
    }

    int deleteProduct(string pName, vector<Amazon> &products)
    {
        for (auto i = products.begin(); i != products.end(); i++)
        {
            if (i->pName == pName)
            {
                products.erase(i);
                cout << "Product deleted successfully" << endl;
                break;
            }
        }
    }

    int updateProduct(string pName, vector<Amazon> &products)
    {
        string name, color;
        int price, quantity;
        cout << "Enter Product Name: " << endl;
        cin >>name;
        cout << "Enter Product Price: " << endl;Q
        cin >>price;
        cout << "Enter Product Quantity: " << endl;
        cin >>quantity;
        cout << "Enter Product Color: " << endl;
        cin >>color;

        for (auto i = products.begin(); i != products.end(); i++)
        {
            if (i->pName == pName)
            {
                i->pName = name;
                i->pPrice = price;
                i->pColor = color;
                i->pQty = quantity;
                break;
            }
        }
    }
};

int main()
{
    int choice;
    vector<Amazon> products;

    do
    {
        Amazon a;
        string productName;
        string name;
        cout << "1.Add Product" << endl;
        cout << "2.Display Product" << endl;
        cout << "3.Delete Product" << endl;
        cout << "4.Update Product" << endl;
        cout << "5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            a.addProduct();
            products.push_back(a);
            break;

        case 2:
            for (auto i : products)
            {
                i.display();
            }
            break;

        case 3:
            cout << "Which product do you want to delete" << endl;
            cin >> a.pName;
            a.deleteProduct(a.pName, products);

        case 4:
            cout << "Which product do you want to update" << endl;
            cin >> a.pName;
            a.updateProduct(a.pName, products);

        case 5:
            exit;

        default:
            break;
        }

    } while (choice != 5);
}