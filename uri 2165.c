#include<stdio.h>

int main()
{
    unsigned short len,i;
    char t[510];

    scanf("%[^\n]", t);
    i=0;
    while(t[i++])
    {
        len++;
    }

    if(len<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }


    return 0;
}
