#include<stdio.h>
int prime(int n)
{
    int i,j,flag=0;
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                flag+=1;
            }
        }
    
        if(flag==2)
        {
            printf("%dis prime ",i);
        }
        else
        {
            printf(" %dnot prime ",i);
        }
    }
    
}
int main()
{
    int num;
    printf("enter the n value:");
    scanf("%d",&num);
    prime(num);
    return 0;
}
