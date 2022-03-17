#include<iostream>
using namespace std;
int main()
{
     int a=0,b=1,i,num,f;
     cout<< "Enter any number :";
     cin>>num;
     for(i=0; i<num; i++)
     {
          cout<< a<< " ";
          f=a+b;
          a=b;
          b=f;


     }


     return 0;
}
