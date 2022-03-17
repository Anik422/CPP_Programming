#include<iostream>
using namespace std;
int main()
{
     int s,t,f,sum;
     cin>>s>>t>>f;
     sum=s+t+f;
     if(sum<=24 && sum>0)
     {
          cout<<sum<<endl;
     }
     else if(sum>24)
     {
          sum=sum-24;
          cout<<sum<<endl;
     }
     else if(sum<0)
     {
          sum=sum+24;
          cout<<sum<<endl;
     }



     return 0;
}
