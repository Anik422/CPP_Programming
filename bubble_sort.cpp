#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
     int j,k,temp;
     for(j=0; j<n; j++)
     {
          for(k=0; k<n-j-1; k++)
          {
               if(a[k]>a[k+1])
               {
                    temp = a[k];
                    a[k] = a[k+1];
                    a[k+1] = temp;
               }
          }
     }
}
int main()
{
     int num;
     cout << "Enter array size :";
     cin >> num;
     int array[num],i,array_length;
     for(i=0; i<num; i++)
     {
          cout << i+1<<" number value input : ";
          cin>>array[i];
     }
     cout<<endl;
     array_length = sizeof(array)/sizeof(array[0]);
     bubble_sort(array,array_length);
     cout<<endl;
     for(i=0; i<array_length; i++)
     {
          cout <<i<< " index for value :"<<array[i]<<endl;
     }


     return 0;
}
