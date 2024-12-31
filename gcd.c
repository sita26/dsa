//GCD using recursion

#include<stdio.h>
int gcd(int a, int b)
{
    if ( b== 0)
    return a;
    else 
    return gcd(b, a%b);
}

int main()
{
    int a, b;
    int temp;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("$%d",&b);
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;

    }
    printf("The gcd is %d\n",gcd(a,b));
    return 0;
}