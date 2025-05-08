#include<stdio.h>
int fact(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int d,num,temp,sum=0;
    printf("enter th num:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        d=temp%10;
        sum=sum+fact(d);
        temp=temp/10;
    }

    if(sum==num)
    {
        printf("strong ");
    }
    else 
    {
        printf("not strong");
    }
}
