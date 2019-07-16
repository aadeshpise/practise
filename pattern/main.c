#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,k,i,j,rows,number=1,space;
    printf("enter the pattern you want to print: ");
    scanf("%d",&k);

    switch(k)
    {


    case 1:
    printf("enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d\t",i);

    }
    printf("\n");
    }
    break;

    case 2:
        printf("enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d\t",j);

    }
    printf("\n");
    }
    break;

    case 3:
        printf("enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d\t",number);
        number++;

    }
    printf("\n");
    }
    break;

    case 4:
    printf("enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {
    for(j=1;j<=i;j++)
    {
        printf("*");

    }
    printf("\n");
    }
    break;

    case 5:
     printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    break;


    case 6:
         printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i, m=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }
        while(m != 2*i-1)
        {
            printf("* ");
            ++m;
        }
        printf("\n");
    }
return 0;
}
}
