#include<iostream>
using namespace std;
int fact(int n)
{
     if(n==1)
          return 1;
     else
     {
          return n*fact(n-1);
     }
}
int main()
{
     int num,result;
     cin >> num;
     result = fact(num);
     cout<< result;

     return 0;
}
