//factorial using recursion

#include<stdio.h>
int fact(int n)
{
    if(n ==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if (n<0)
{
    printf("The factorial of the number %d is not defined.",n);
}
else
{
    printf("The factorial of %d is %d.",n, fact(n));
}
return 0;
}