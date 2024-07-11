#include <iostream>
using namespace std;
int main()
{
   int no, binary;
    cout << "Enter the decimal number: ";
    cin >> no;
    cout << "The binary equivalent of " << no << " is ";
    while (no > 0)
    {
        binary = no % 2;
        cout << binary;
        no /= 2;
    }
    return 0;

}