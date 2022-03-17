#include<stdio.h>
#include<string.h>
int main()
{
     char s[502];
     scanf("%[^\n]",s);
     int len = strlen(s);
     if(len<=80)
     {
          printf("YES\n");
     }
     else
     {
          printf("NO\n");
     }



     return 0;
}
