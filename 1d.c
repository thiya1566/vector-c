#include<stdio.h>
void check(int);
int main()
{
    int arr[10];
    printf("enter the array elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
        
    }
}
void check(int num)
{
    if(num%2==0)
    {
        printf("the numbers are even%d\n",num);
    }
    else
    {
        printf("the number is odd:%d\n",num);
    }
}
