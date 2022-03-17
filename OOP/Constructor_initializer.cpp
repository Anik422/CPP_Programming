#include<iostream>
using namespace std;
class Student
{
     public:
          const int admissionFee;

          Student(int x)
          : admissionFee(x)
          {

               cout << admissionFee << endl;
          }

};
int main()
{
     Student anik(1500);


     return 0;
}
