#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Please Enter the Year: ";
    cin>>year;
    
    //leap year condition
    if ((year%4==0) && (year%100!=0))
    cout <<"\nIt is a Leap Year";
    else if (year%400==0)
    cout <<"\nIt is a Leap Year";
    else
    cout <<"\nIt is not a Leap Year";
    return 0;
}