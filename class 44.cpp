#include<iostream>
using namespace std;
int main()
{
     int *mark;
     int n,i,sum=0;
     cin>>n;

     mark=new int[n];
     for(i=0; i<n; i++)
     {
          mark[i]=i;
     }
     //bubbleSort(mark,n);
     for(i=0; i<n; i++)
     {
          cin>>mark[i];
     }
     for(i=n-1; i>=0; i--)
     {
          sum=sum+mark[i];
          cout<<"\n"<<mark[i]<<endl;
     }
     cout<<"\n"<<sum<<endl;


     return 0;
}
