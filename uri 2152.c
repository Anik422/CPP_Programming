#include<stdio.h>
int main()
{
    int n,h,m,o,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&h,&m,&o);
        if(h<10)
            printf("0%d:",h);
            else
                printf("%d:",h);
        if(m<10)
            printf("0%d",m);
            else
                printf("%d",m);
        if(o==1)
            printf(" - A porta abriu!\n");
          else
               printf(" - A porta fechou!\n");

    }

    return 0;
}
