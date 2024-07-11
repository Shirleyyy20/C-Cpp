#include <iostream>

using namespace std;

int main()
{
    int num,i=1,sum=0;
    cout<<"Please Enter the Number: ";
    cin>>num;
    while (i<=num)
    {
        sum=sum+i;
        i++;
    }
    
    cout<<"\n The Sum of Natural Numbers from 1 to "<<num<< " is " <<sum;

    return 0;
}