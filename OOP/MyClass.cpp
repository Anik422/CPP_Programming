#include<iostream>
using namespace std;
class Student{
     public:
          string name;
          int id;
          double gpa;
          void display()
          {
               cout << name << "  " << id << "  " << gpa << endl;
          }
//          void SetValue(string student_name, int student_id, double student_gpa) //user defined function
//          { //set value
//                name = student_name;
//                id = student_id;
//                gpa = student_gpa;
//          }
          Student(string student_name, int student_id, double student_gpa) //constructor function
          { //set value
               name = student_name;
               id = student_id;
               gpa = student_gpa;
          }
          Student() //Default constructor defined
          {
               cout << "Default constructor" << endl;
          }
};
int main()
{
     Student op; // call default constructor
     Student Alim("Alim Rohoman", 1001, 4.25), Anik("Anik Saha", 1002, 3.25);
//     Alim.name = "Alim Rohoman";
//     Alim.id = 1001;
//     Alim.gpa = 4.25;
//     Alim.SetValue("Alim Rohoman", 1001, 4.25);
     Alim.display();
//     cout << Alim.name << "  " << Alim.id << "  " << Alim.gpa << endl;
//     Student Anik;
//     Anik.name = "Anik Saha";
//     Anik.id = 1002;
//     Anik.gpa = 3.25;
//     Anik.SetValue("Anik Saha", 1002, 3.25);
     Anik.display();
//     cout << Anik.name << "  " << Anik.id << "  " << Anik.gpa << endl;
     return 0;
}
