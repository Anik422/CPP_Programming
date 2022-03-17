#include<iostream>
using namespace std;
void fibo_number(int x)
{
     int a,b,i,temp;
     a = 0;
     b = 1;
     for(i=0; i<x; i++)
     {
          cout << a <<endl;
          temp = a +b;
          a = b;
          b = temp;
     }
}
int main()
{
     int num;
     cout << "Enter any integer number";
     cin>>num;
     fibo_number(num);

     return 0;
}
