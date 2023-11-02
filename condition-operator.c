#include<stdio.h>
int main()
{
    /*to find the largesr of two numbers using conditional operator.
    int a,b,large;
    printf("enter two number:\n");
    scanf("%d%d",&a,&b);
    large=a>b?a:b;
    //?: is ternary operator
    printf("large no. of two is =%d\n",large);
    return 0;*/


    // to find the largest between three numbers using conditional operator.
    int a,b,c,large;
    printf("enter three numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b)? ((a>c)?a:c) : ((b>c)?b:c);//a=50 b=40 c=60
    printf("largest no. is %d",large);
    return 0;

}

