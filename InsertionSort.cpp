#include<iostream>
using namespace std;
void InsertionSort(int a[], int SizeOfArray)
{
     int i, j, item;
     for(i=1; i<SizeOfArray; i++)
     {
          item = a[i];
          j=i-1;
          while(j>=0 && a[j]>item)
          {
               a[j+1] = a[j];
               j = j - 1;
          }
          a[j+1] = item;
     }
}
int main()
{
     int ArraySize;
     cout << "Enter array size :";
     cin>>ArraySize;
     int array[ArraySize],i;
     for(i=0; i<ArraySize; i++)
     {
          cout << "Element # " << i+1 << ": ";
          cin >> array[i];
     }
     InsertionSort(array,ArraySize);
     for(i=0; i<ArraySize; i++)
     {
          cout << i << "Index value = " << array[i] << endl;
     }


     return 0;
}
