
#include<iostream>
using namespace std;
void BubbleSort(int array[], int SizeOfArray)
{
     int i,j,IndexMin,temp;
     for (i=0; i<SizeOfArray; i++)
     {
          for(j=0; j<(SizeOfArray-1-i); j++)
          {
               if(array[j] > array[j+1])
               {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
               }
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
     BubbleSort(array,ArraySize);
     for(i=0; i<ArraySize; i++)
     {
          cout << i << " index value = " << array[i] << endl;
     }



     return 0;
}
