#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
struct Person{
    string ph_no;
    string name;
    string email_id;
    void print(){
        cout <<setw(20)<<name << setw(20) << ph_no << setw(40) << email_id<<endl;
    }
};
int main()
{
    Person p[10];
    int counter_val=0, counter_element=-1;
    fstream f;
    f.open("data.csv", ios::in);
    string data, val;
    bool first_line= true;
    while (getline(f,data))
    {
        if (first_line)
        {
            first_line=false;
            continue;
        }
        stringstream s(data);
        while (getline(s,val,','))
        {
            if ((counter_val%3)==0)
            {
                counter_element+=1;
            }
            if ((counter_val%3)==0){
                p[counter_element].name=val;
            }
            else if ((counter_val%3)==1){
                p[counter_element].ph_no=val;
            }
            else if ((counter_val%3)==2){
                p[counter_element].email_id=val;
            }
            counter_val++;
        }
    }
    for (int i=0; i<10; i++)
        {
            p[i].print();
        }
    f.close();
}