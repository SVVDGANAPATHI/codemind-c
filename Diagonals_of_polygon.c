#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    if(n>2)
    {
        d=(n*(n-3))/2.0;
        printf("%d",d);
    }
    return 0;
}