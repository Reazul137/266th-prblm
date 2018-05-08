#include<stdio.h>
int main()
{
    int sum, x;
    sum =0;

    for (x=1; x<=50; ++x)
    {
        sum = sum +x;
    }
    printf(" 1+ 2 + ...+50 = %d\n", sum);
    return 0;
}
