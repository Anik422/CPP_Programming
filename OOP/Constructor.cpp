#include<iostream>
using namespace std;
class student
{
public:
     int id;
     double gpa;
     void display()
     {
          cout << id << "  "<< gpa << endl;
     }
     student(int x, double y)
     {
          id = x;
          gpa = y;
          display();
     }
};
int main()
{
     student Anik(1002, 4.57), Abir(1003, 4.66), Probla(1004, 4.45);



     return 0;
}

