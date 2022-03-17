#include<iostream>
using namespace std;
void selection_sort(int A[],int n)
{
     int index_min,i,j,temp;
     for(i=0; i<n-1; i++)
     {
          index_min = i;
          for(j=i+1; j<n; j++)
          {
               if(A[j]<A[index_min])
               {
                    index_min = j;
               }
          }
          if(index_min != i)
          {
               temp = A[i];
               A[i] = A[index_min];
               A[index_min] = temp;
          }
     }
}
int main()
{
     int n,i;
     cout << "Enter array size :";
     cin>> n;
     int array[n],array_size;
     for(i=0; i<n; i++)
     {
          cout << "Element number "<<i+1<<" : ";
          cin>> array[i];
     }
     array_size = sizeof(array)/sizeof(array[0]);
     selection_sort(array, array_size);
     for(i=0; i<array_size; i++)
     {
          cout<< i << " index in value : "<<array[i]<<endl;
     }



     return 0;
}
