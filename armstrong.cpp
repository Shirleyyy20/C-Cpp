#include <iostream>
using namespace std;
int main()
{
    int num,a,sum=0,temp;    
    cout<<"Enter the Number: ";    
    cin>>num;    
    temp=num;    
    while(num>0)    
    {    
        a=num%10;    
        sum=sum+(a*a*a);
        num=num/10;    
    }    
    if(temp==sum)    
    cout<<"It is an Armstrong Number"<<endl;    
    else    
    cout<<"It is Not Armstrong Number"<<endl;   
    return 0;  
}