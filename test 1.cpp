#include<iostream>
using namespace std;
int main()
{
     int num,i,mul=1;
     cout<< "Enter any integer number :";
     cin>> num;

     for(i=1; i<=num; i++)
     {
          mul=mul*i;
     }
     cout<< "The result is :"<<mul;


     return 0;
}
