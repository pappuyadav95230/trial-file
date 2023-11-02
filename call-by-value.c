//swap the number
#include<stdio.h>
void swap(int ,int);
 int main ()
{
    int a,b;
    printf("enter number\n");
    scanf("%d%d",&a,&b);
    printf("before swap value in main\na=%d\nb=%d\n",a,b);
    swap (a,b);
    printf("after swap value in main swap\na=%d\nb=%d\n",a,b);
}
void swap (x,y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("after sawp value in function \nx=%d\ny=%d\n",x,y);
}



