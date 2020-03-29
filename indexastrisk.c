#include<stdio.h>
#include <stdlib.h>

int main()
{
char str[101];
scanf("%s",str);
int index,len;
len=strlen(str);
for(index=0;index<len;index++)
{
    if(str[index]>='a')
    {
        if(str[index]<='j')
        {
            printf("%c",str[index]);
        }
        else
        printf("*");
    }
    else
    printf("*");
}

}