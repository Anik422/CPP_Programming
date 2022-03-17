#include<iostream>
using namespace std;
int main()
{
    int num1,num2,n1,n2,temp,lcd;
    cout << "Enter tow number :";
    cin>>num1>>num2;
    n1=num1;
    n2=num2;

        while(n2!=0)
        {
            temp=n1%n2;
            n1=n2;
            n2=temp;
        }
        cout<< "GCD ="<<n1<<endl;
        lcd=(num1*num2)/n1;
        cout<<"LCD ="<<lcd;

    return 0;

}
