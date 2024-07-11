#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st Number ";
    cin>>a;
    cout<<"Enter 2nd Number ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"\n After swapping: \n 1st Number is "<<a<< "\n 2nd Number is " <<b;

    return 0;
}