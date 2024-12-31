//Implement Recursive Algorithms

#include<stdio.h>
long long int table[1005];
long long int Fibo(int n)
{
    if (n == 1 || n == 2)
    return 1;
    else
    {
        if (table[n] == -1)
        {
            table[n] = Fibo(n-1) + Fibo(n-2);
        }
        return table[n];
    }
};

int main()
{
    long int n;
    int i;
    for(i = 1;i<1005;i++)
    {
        table[i] = -1;
    }
    printf("Enter n:");
    scanf("%d", &n);
    printf("Answer is %lldS\n", Fibo(n));
    return 0;
}