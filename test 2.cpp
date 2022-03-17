#include<iostream>
using namespace std;
int main()
{
     int n,i,point, coun=0;
     cout<< "Enter any Number :";
     cin>>n;
     for(i=1; i<=n; i++)
     {

          point= n%i;
          if(point==0)
          {
               coun++;
          }


     }
     if(coun==2)
     {
          cout<<n<<" is prime number ."<<endl;
     }
     else
     {
          cout<<n<< "is not prime number."<<endl;
     }



     return 0;
}
