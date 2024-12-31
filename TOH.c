// TOH using recursion

#include<stdio.h>
void TOH(int n, char src, char dst, char tmp)
{
    if(n == 1)
    printf("Move disk %d from %c to %c\n",n, src, dst);
    else
    {
        TOH (n-1, src, tmp, dst);
        printf("Move disk %d from %c to %c\n", n, src, dst);
        TOH(n-1, tmp, dst, src);
    }
};

int main()
{
    int n = 6;
    TOH(n, 'A','C','B');
    return 0;
}