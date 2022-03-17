#include<stdio.h>
#include<string.h>
int main()
{
     char s[10000];
     int n,i,len;
     scanf("%d",&n);
     for(i=1; i<=n; i++)
     {
          scanf("%s",&s);
          len = strlen(s);
          printf("%.2f\n",len/100.00);
     }




     return 0;
}
