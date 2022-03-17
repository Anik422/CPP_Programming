#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    while(1)
    {
        char name_1st[15], name_2nd[15];
        cout << "Enter your 1st name: ";
        gets(name_1st);
        cout << "Enter your 2nd name: ";
        gets(name_2nd);
        int cmp = strcmp(name_1st, name_2nd);
        if (cmp == 0)
        {
            cout << "1st and 2nd name is same.\n\n" <<endl;
        }
        else
        {
            strcat(name_1st, name_2nd);
            strupr(name_1st);
            cout << "Welcome " << name_1st <<endl;
            strlwr(name_1st);
            cout << "Welcome " << name_1st <<endl;

            int string_len = strlen(name_1st);
            cout << "String length = " << string_len << endl;
            break;
        }

    }



    return 0;
}
