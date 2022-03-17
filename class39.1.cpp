#include<iostream>
using namespace std;
int main()
{
     for(int i=1; i<=100; i++)
     {
          if(i==10)
          {
               continue;
          }
          if(i>13)
          {
               break;
          }
          cout<< i << endl;
     }


     return 0;
}
