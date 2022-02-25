#include<stdio.h>
int main()
{
    char str[30];int i;
    scanf("%s",str);
 for(i=0;str[i]!=NULL;i++)
 {
     if((str[i]>='A')&&(str[i]<='Z'))
     {
         str[i]=str[i]+32;
         
     }

 }
         printf("%s",str);
}