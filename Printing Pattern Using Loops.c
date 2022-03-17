#include<stdio.h>
int main()
{
     int n,i,j,k,l,m,o,p;
     scanf("%d",&n);
     int array[n][n];
      o=0;
        p=n-1;
        for(m=n; m>=0; m--)
        {
            for(i=o; i<=p; i++)
            {
                for(j=o; j<=p; j++)
                {
                    array[i][j]=m;
                }
            }
            o++;p--;
        }
     for(k=0; k<n; k++)
     {
          for(l=0; l<n; l++)
          {
               printf("%d",array[k][l]);
          }
          printf("\n");
     }
     return 0;
}
