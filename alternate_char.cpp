#include <iostream>
using namespace std;

int main()
{
     string name;
    cout<<"Enter Name : ";
    getline(cin,name);
    for (int i=0; i<name.size(); i=i+2)         
    {
        cout << name[i];
    }
    return 0;
}