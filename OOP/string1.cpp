#include<iostream>
#include<string>
using namespace std;
int main()
{
     string str1 = "Anik";
     string str2 = " Saha";
     string str3 ;

     str3 = str1;
     cout << "str3 = " << str3 << endl;
     str3 = str1 + str2 ;
     cout << "str1 + str2 = " << str3 << endl;
     int len = str3.size();
     cout << "str3 len = " << len << endl;



     return 0;
}
