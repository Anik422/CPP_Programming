#include<iostream>
using namespace std;
int main()
{
     int num,sum=0,rem;
     cout<< "Enter any number :";
     cin>>num;
     while(num!=0)
     {
          rem=num%10;
          sum=(sum*10)+rem;
          num=num/10;
     }
     if(num==sum)
     {
       cout<< "The number is palindrome :"<<sum;
     }
     else
     {
          cout<< "The input number reverse :"<<sum;
     }


     return 0;
}
