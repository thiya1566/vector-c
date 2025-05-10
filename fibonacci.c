#include<stdio.h>
int main()
{
 int num,c,i,b=1,a=0; 
 printf("enter the number:");
 scanf("%d",&num);
    printf("%d%d",a,b);
    for(i=3;i<=num;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
