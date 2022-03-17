#include<iostream>
using namespace std;
/*int fact_number( int x )
{
     int i,initial = 1;
     for(i=1; i<=x; i++)
     {
          initial*=i;
     }
    return initial;

}*/
int main()
{
     int num,result,i;
     cout << "Enter any integer number :";
     cin >> num;
     result =1;
     // result = fact_number(num);  //use function
     for(i=1; i<=num; i++)
     {
          result *= i;
     }
      cout << num << " number of factorial ="<< result << endl;
     return 0;
}
