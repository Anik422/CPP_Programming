#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << id <<"  "<<gpa<< endl;
    }

};

int main()
{
    student Anik,Apon,Abir;
    Anik.id = 1002;
    Anik.gpa = 3.12;
    Anik.display();

    Apon.id = 1003;
    Apon.gpa = 3.52;
    Apon.display();

    Abir.id = 1005;
    Abir.gpa = 3.84;
    Abir.display();

    return 0;
}
