#include <iostream>
#include <fstream>
#include <thread>
using namespace std;
void prime_num()
{
    int a = 1000000, x = 2, i;
    bool prime;
    ofstream prime_numbers("prime_numbers.txt");  
    while (x < a) 
    {
    prime = true;
    for (i = 2; i <= x/2; ++i) 
    {
      if (x % i == 0) 
      {
        prime = false;
        break;
      }
    }
    if (prime)
    prime_numbers << x <<", ";
    ++x;
    }
  prime_numbers.close();
}
void odd_num()
{
    int a = 1000000, x = 0;
    ofstream odd_numbers("odd_numbers.txt");
    while (x < a)
    {
        if (x % 2 != 0)
        {
            odd_numbers << x <<", ";
        }
    ++x;
    }
    odd_numbers.close();
}
int main()
{
    /*thread t1(prime_num);    thread t2(odd_num);    t1.join();    t2.join();*/    prime_num();
    odd_num();
}