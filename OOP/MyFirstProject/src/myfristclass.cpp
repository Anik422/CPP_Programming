#include "myfristclass.h"
#include<iostream>
//#include<stdio.h>
using namespace std;

//MyFristClass::MyFristClass()
//{
//    cout << "Hello world" << endl;
////     printf("Anik Saha\n");
//}
//void MyFristClass::display()
//{
//     cout << "Inside the display function" << endl;
////     printf("Durjoy saha");
//}
MyFristClass :: MyFristClass()
{
     cout << "Constructor is called" << endl;
}
MyFristClass :: ~MyFristClass()
{
     cout << "Destructor is called" << endl;
}
void MyFristClass :: display()
{
     cout << "Display is called" << endl;
}
