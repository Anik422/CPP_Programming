#include <iostream>

#include <iostream>
#include<stdio.h>
using namespace std;



int main() {
    char str[10];
    cin>>str;

    for(int i = 0; i < 10; i++)
     {
       if(str[i]==',')
       {
            cout<< "\n";
       }
       else if(str[i]==' ')
       {
          break;
       }
       else
       {
            cout<<str[i];
       }
    }

    return 0;
}

