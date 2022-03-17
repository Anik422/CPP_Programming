#include<iostream>
using namespace std;
void SelectionSort(int array[], int SizeOfArray)
{
     int i,j,IndexMin,temp;
     for (i=0; i<SizeOfArray-1; i++)
     {    IndexMin = i;
          for(j=i+1; j<SizeOfArray; j++)
          {
               if(array[IndexMin] > array[j])
               {
                    IndexMin = j;
               }
          }
          if(IndexMin != i)
          {
               temp = array[i];
               array[i] = array[IndexMin];
               array[IndexMin] = temp;
          }
     }
}
int main()
{
     int ArraySize;
     cout << "Enter Array Size :";
     cin>> ArraySize;
     int array[ArraySize],i;
     for(i=0; i<ArraySize; i++)
     {
          cout << "Element # " << i+1 << " : ";
          cin >> array[i];
     }
     SelectionSort(array,ArraySize);
     for(i=0; i<ArraySize; i++)
     {
          cout << i << " index value = " << array[i] << endl;
     }



     return 0;
}
