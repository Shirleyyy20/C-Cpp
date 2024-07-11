#include <iostream>
using namespace std;
class addition
{
    public:
    int a,b;
    addition()
    {
        cout<< "Enter Number 1: ";
        cin >> a;
        cout<< "Enter Number 2: ";
        cin >> b;

    }
    void display()
    {
        cout << "Addition of " << a << " and " << b << " is "<< a+b<<endl;
        cout<<"---"<<endl;
    }
};
class mother
{
    public:
    void display()
    {
        cout << "This is the mother!" << endl;
    }
};
class daughter : public mother
{
    public:
    void display()
    {
        cout << "This is the daughter!" << endl;
    }
};
int main(void)
{
    addition A;
    daughter D;
    A.display();
    D.display();
    D.mother::display();
    return 0;
}