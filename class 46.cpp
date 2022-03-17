#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<< "Enter Number of student :";
    cin>>n;
    int student[n];
    for(int i=0; i<n; i++)
    {
        cout << "Marks for student "<<i+1<<" =";
        cin>>student[i];
        sum+=student[i];
    }
    cout<< "Total marks :"<<sum<<endl;
    cout<< "Average :"<< (float)sum/n<<endl;
    int max = student[0];
    int min = student[0];
    for(i=1; i<n; i++)
    {
         if(max<student[i])
         {
              max= student[i];
         }
         if(min>student[i])
         {
              min= student[i];
         }
    }
    cout<< "Maximum mark = "<<max<<endl<<endl;
    cout<< "Minimum mark = "<<min<<endl;

    return 0;
}
