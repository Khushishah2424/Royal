#include<iostream>
#include<string>
using namespace std;

int find(string name,char c)
{
    for (int i = 0; i < name.length();i++)
    {
        if(name[i]==c)
        {
            return i;
        }
    }
}

int main()
{
    string name = "java";
    char c = 'a';
    int index = find(name, c);
    cout << index+1 << endl;
}
