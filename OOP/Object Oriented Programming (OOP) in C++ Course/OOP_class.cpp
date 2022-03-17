#include<iostream>
using namespace std;
//using std::string;
class Employee{
//private:
//protected:
public:
     string Name;
     string Company;
     int Age;
     void IntroduceYourSelf()
     {
          cout << "Name = " << Name << endl;
          cout << "Company = " << Company << endl;
          cout << "Age = " << Age << endl;
     }

};
int main()
{

     Employee employee1;
//     employee1.Name = "Anik Saha";
//     employee1.Company = "YT-codeBeauty";
//     employee1.Age = 22;
     employee1.IntroduceYourSelf();

     Employee employee2;
//     employee2.Name = "Durjoy Saha";
//     employee2.Company = "Amazon";
//     employee2.Age = 24;
     employee2.IntroduceYourSelf();

     return 0;
}
