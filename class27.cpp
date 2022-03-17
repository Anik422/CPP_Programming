#include<iostream>
using namespace std;
int main()
{
     char ch;
     cout<< "Enter any latter :";
     cin>>ch;
     ch= toupper(ch);
     cout<<ch<<endl;
     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     {
          cout<<"vowel"<<endl;
     }
     else
     {
          cout<<"Consonant"<<endl;
     }


     return 0;
}
