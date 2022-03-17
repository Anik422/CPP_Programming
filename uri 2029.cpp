#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     float a,b,area,hight;
     while(scanf("%f%f",&a,&b)!=EOF)
     {
          b = b/2;
          area = 3.14*b*b;
          hight = a/area;
         printf("ALTURA = %.2f\n",hight);
         printf("AREA = %.2f\n",area);
     }
}
