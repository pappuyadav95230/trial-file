#include<stdio.h>
int main()
{
    //code for arithmetic operator
    int a,b,c;
    a=1;
    b=5;
    c=3;
    printf("%d\n",(a>=b)&&(4+b));
    printf("%d\n",(a<b)&&(c<b));
    printf("%d\n",(a+c)||(b>c));
    printf("%d\n",(a+b)&&(a==c));
    printf("%d\n",(a+b)&&(30>b));
    printf("%d\n",(a<40)||(!c));
    return 0;

        
}