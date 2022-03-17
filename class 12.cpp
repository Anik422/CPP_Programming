#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     double num1,num2;
     cout<< "Enter tow number: ";
     cin>>num1>>num2;

     cout<< showpoint;
     cout<<fixed;
     cout<<setprecision(2);

     double sum=num1+num2;
     cout<<setw(25)<< "The sum is :"<<sum<<endl;
     //cout<<noshowpoint;
     double sub=num1-num2;
     cout<<setw(25)<< "The subtraction is :"<<sub<<endl;

     double mul=num1*num2;
     cout<<setw(25)<< "The multiplication is :"<<mul<<endl;
     double div=(double) num1/num2;
     cout<<setw(25)<< "The division is :"<<div<<endl;
    // int rem=num1%num2;
    // cout<< "The remainder is :"<<rem<<endl;

    return 0;
}
