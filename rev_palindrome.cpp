#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
string str;

    cout<<"\n" << "Enter string : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');     //to flush the buffer
    getline(cin,str);
    string str1=str;
    reverse(str.begin(),str.end());              //using function to reverse string

    if (str.compare(str1)==0)                    //checking if the string is palindrome or not
    {
        cout << str1 << " is a palindrome" ;
    }
    else
    {
        cout << str1 << " is not a palindrome" ;
    }
}