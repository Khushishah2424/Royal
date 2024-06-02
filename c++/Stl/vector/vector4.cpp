// #include<iostream>
// #include<vector>
// #include<string>

// using namespace std;

// int main()
// {
//     vector<string> s1;
//     string name;
//     string n;
//     int num;
//     while (true)
//     {
//        cout<<"\nEnter the Name : ";
//        cin>>name;

//        s1.push_back(name);

//        cout<<"\nPress any number to add another name in vector\nEnter 0 to Exit\n";
//        cin>>n;
//        if(n == "0")
//        {
//         break;
//        }


//     }

//     for(string i:s1)
//     {
//         cout<<i<<endl;
//     }

// }

// bool isPalindrome(string s){
//     //naman
//     int n=s.size(); //5
//     for(int i=0;i<n/2;i++){
//         if(s[i]!=s[n-i-1]){
//             return false;
//         }
//     }
//     return true;
// }
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string s)
{
    int n = s.size(); 
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> v;
    string s;
    int num;

    while (true)
    {
        cout << "\nEnter a name to a vector" << endl;
        cin >> s;
        num = isPalindrome(s);

        if(num==true)
        {
            v.push_back(s);
        }

        else
        {
            continue;
        }


        cout << "\npress 0 to exit or any other no to continue" << endl;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
    for (string i : v)
    {
        cout << i << endl;
    }
}

