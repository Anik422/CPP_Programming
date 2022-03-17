#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter 1st number :";
    cin>>num1;
    cout << "Enter 2nd number :";
    cin>>num2;
    cout << "Enter 3rd number :";
    cin>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<< "The 1st number is large ="<<num1;
    }
   else if(num2>num1 && num2>num3)
    {
        cout<< "The 2nd number is large ="<<num2;
    }
    else if(num3>num2 && num3>num1)
    {
        cout<< "The 3rd number is large ="<<num3;
    }
    else if(num1==num2 || num1==num3 || num2==num3)
    {
         cout<< "The two number is same.";
    }

    else
    {
         cout<< "The three number same.";
    }
    return 0;
}
