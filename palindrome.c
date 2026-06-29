#include<stdio.h>
int palindrome(int num)
{
    int temp=num;
    static int i,rem=0,rev=0;
    for(;temp>0;temp=temp/10) //while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        //temp=temp/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(palindrome(num)==num)
    {
        printf("its palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
