#include<iostream>
using namespace std;
int main()
{
    int a,c;
    float f;
    double d;
    char ch;
    char name[20];

    c=sizeof(a);
    cout<<c<<endl;
    c=sizeof(f);
    cout<<c<<endl;
    c=sizeof(d);
    cout<<c<<endl;
    c=sizeof(ch);
    cout<<c<<endl;
    c=sizeof(name);
    cout<<c<<endl;

    return 0;
}
