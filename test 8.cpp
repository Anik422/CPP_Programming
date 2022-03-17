#include<iostream>
#include<string>
using namespace std;
int main()
{
     string a,b,c;
     char d,e;
     int len1,len2;
     //string b[10];
     cin>>a;
     cin>>b;
      len1= a.size();
      len2= b.size();
      c=a+b;
      d=a[0];
      e=b[0];
      b[0]=d;
      a[0]=e;
     cout << len1 <<" "<<len2<<endl;
     cout <<c<<endl;
     cout <<a<<" "<<b;


     return 0;
}
