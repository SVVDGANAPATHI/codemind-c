#include<stdio.h>
int main()
{
    int i,j,n,a[20],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                printf("%d",a[i]);
                flag=1;
                break;
            }
        }
    }
    
}
