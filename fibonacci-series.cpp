#include <iostream>

using namespace std;

int main()
{
    int n,i,a=0,b=1,c;
    cout<<"Enter the number of terms: ";
    cin>>n;
    
    cout <<"\nFibonacci Series is; "<<endl;
    for (i=a;i<=n;i++)
    {
        cout <<a<<"  ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}