#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int
    orignum,r,num,result=0;

    printf("enter a number: ");
    scanf("%d",&orignum);
   num=orignum;

    while(orignum!=0)
    {
        r=orignum%10;
        result+=r*r*r;
        orignum=orignum/10;

    }

    printf(" result is equal to:%d\n", result);

    if(result==num)
        printf("number is amstrong number\n\n");
    else
        printf("not an amgstrong number");
}
