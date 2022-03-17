#include "mynewclass.h"
#include<iostream>
using namespace std;
void MyNewClass :: display1()const
{
     cout << "I am constant function ." << endl;

}
void MyNewClass :: display2()
{
     cout << "I am non-constant function ." << endl;

}
