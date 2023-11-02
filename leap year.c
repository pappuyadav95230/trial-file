//find the greatest no. brtween three numbers.
#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("enetr the three value\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is the largest number\n%d",a);

        }
        else 
        {
            printf("c is largest number\n%d",c);
        }
    }
    else
    {
        if (b>c)
        {
            printf("b is the largest no.%d ",b);
        }
        else
        {
            printf("c is the largest no.%d",c);
        }
    }
    return 0;
}