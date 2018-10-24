#include<stdio.h>
int main()
{
    int i,n;
    int d,product;

    scanf("%d",&n);
    product = 1;

    for (i = 1;i <= n;i++)
    {
        scanf("%d",&d);

        if(d % 2 != 0)
            product *= d;
    }
    printf("%d\n",product);
    return 0;
}
