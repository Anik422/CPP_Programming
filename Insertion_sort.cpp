#include<iostream>
using namespace std;
void inserton_sort(int a[], int size_of_array)
{
     int i,j, item;
     for(i=1; i<size_of_array; i++)
     {
          item = a[i];
          j = i-1;
          while(j>=0 && a[j]>item)
          {
               a[j+1] = a[j];
               j = j-1;
          }
          a[j+1] = item;
     }
}
int main()
{
     int array_size;
     cout << "Enter array size :";
     cin >> array_size;
     int number_list[array_size],i;
     for(i=0; i<array_size; i++)
     {
          cout << "Element # " << i + 1 << " : ";
          cin >> number_list[i];
     }
     inserton_sort(number_list, array_size);
     for(i=0; i<array_size; i++)
     {
          cout << i << "Index value =" << i + 1 << endl;
     }



     return 0;
}
