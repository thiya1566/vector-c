#include<stdio.h>
int palindrome(int num)
{
    int i,r,sum=0,p;
    int temp=num;
    //for(temp=num;temp>0;temp=temp/10)
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("%d\n",sum);
    return sum;
}
int main()
{
    int i,num,rev;
    printf("enter the number:");
    scanf("%d",&num);
    rev=palindrome(num);
    if(rev==num)
    {
      printf("palndrome");  
    }
    else{
        printf("not palndrome");
    }
    
}
