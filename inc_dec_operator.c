#include<stdio.h>
int main()
{
    int x,y=10,a,b=9; 
    x=y++;
    a=b--;
    printf("after execution\nx=%d\ny=%d\na=%d\nb=%d",x,y,a,b);
    return 0;


}