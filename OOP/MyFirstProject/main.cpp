#include <iostream>
#include "myfristclass.h"
using namespace std;

int main()
{
//    MyFristClass op;
//    op.display();
MyFristClass object;
//object.display();
MyFristClass *p = &object; // used Selection Operator
p -> display();

    return 0;
}
