#include<iostream>
using namespace std;
int main()
{
     int n, num[10],i;
     cin>>n;
     for(i=0; i<n; i++)
     {
          cin>>num[i];
     }
     for(i=0; i<n; i++)
     {
          if(num[i]<=num[i+1])
          {
              if(num[i]<=[i+2])
              {
                   cout<<num[i]<<" ";
                    /*if(num[i]<=[i+3])
                    {
                          if(num[i]<=[i+4])
                          {
                                if(num[i]<=[i+5])
                                {
                                      if(num[i]<=[i+6])
                                      {
                                            if(num[i]<=[i+8])
                                            {
                                                  if(num[i]<=[i+9])
                                                  {
                                                       cout<<num[i]<<" ";
                                                  }
                                            }
                                      }
                                }
                          }
                    }*/
              }


          }

     }


}
