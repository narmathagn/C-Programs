#include<stdio.h>

void main() {
    char *c="Welcometozohocorporation";
    char ch[5][5];
    int n=0;
    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            ch[i][j]=c[n];
            n++;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%c ",ch[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(ch[i][j]=='t'&&ch[i][j+1]=='o'&&ch[i][j+2]=='o')
            {
                printf("start index:<%d,%d>",i,j);
                printf("end index:<%d,%d>",i,j+2);
            }
            printf("\n");
            if(ch[i][j]=='t'&&ch[i+1][j]=='o'&&ch[i+2][j]=='o')
            {
                printf("start index:<%d,%d>",i,j);
                printf("end index:<%d,%d>",i+2,j);
            }
        }
    }
}