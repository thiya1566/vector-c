#include<stdio.h>
void avg(int,int);
int main()
{
    int arr[100],count=0,sum=0;
    while(scanf("%d",&arr[count])==1)
    {
        sum+=arr[count];
        count++;
    }
    avg(sum,count);
    return 0;
}
void avg(int sum,int count)
{
    printf("avg %.2f\n",(float)sum/count);
}
