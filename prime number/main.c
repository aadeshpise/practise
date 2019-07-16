#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,n,flag=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)        // for loop checking till i i.e if i=4; 4%1,4%2,4%3.
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
       if(flag==0)
       {
       printf(",");
       printf("%d",i);
       }
    }
    return 0;
}

