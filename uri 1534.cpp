#include<iostream>
using namespace std;
int main()
{
     int n;
     while(cin>>n)
     {
          bool x=false;
          int i,j,k,l;
          for(i=0; i<n; i++)
          {
               for(j=0; j<n; j++)
               {
                    if(n-1-i == j)
                    {
                         cout<<2;
                    }
                    else if(i==j)
                    {
                         cout<<1;
                    }
                    else
                    {
                         cout<<3;
                    }
               }
               cout<<endl;
          }
     }

     return 0;
}
