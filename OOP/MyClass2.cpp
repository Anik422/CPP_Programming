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
     void Setvalue(int x, double y)
     {
          id = x;
          gpa = y;
          display();
     }
};
int main()
{
     student Anik, Abir, Probla;
     Anik.Setvalue(1002, 4.57);
     //Anik.Setvalue();
     Abir.Setvalue(1003, 4.66);
     Probla.Setvalue(1004, 4.45);


     return 0;
}
