#include<iostream>
using namespace std;
int binary_search(int A[], int n, int x)
{
    int first, lest, middle;
    first = 0;
    lest = n-1;
    // use while loop
    while(first <= lest)
    {
        middle = (first + lest)/2;
        if(A[middle]==x)
        {
            return middle;
        }
        if(A[middle]<x)
        {
            first = middle + 1;
        }
        else
        {
            lest = middle - 1;
        }
    }
    return -1;
}


int main()
{
    int num;
    cout<< "Enter array size :";
    cin>>num;
    int arry[num],i,array_len,search_element,result;
    //input array element
    for (i=0; i<num; i++)
    {
        cout<< "Enter " <<i<<" index element input :";
        cin>> arry[i];
    }
    //array size diagnosis
    array_len = sizeof(arry)/sizeof(arry[0]);
    //search element input
    cout << "Enter search element input :";
    cin>> search_element;
    //binary search function call
    result = binary_search(arry,array_len,search_element);
    if(result!=-1)
    {
        cout << "Element is present at index = "<<result<<endl;
    }
    else
    {
        cout << "Element is not present at array = "<<search_element<<endl;
    }

    return 0;
}
