
/*#include<stdio.h>
                
int main()
{
    int n,i;
    printf("enter a number is \n");
    scanf("%d",&n);
    printf("table of number is :\n");
    for ( i= 1; i <=10; i++)
    printf("%dx%d=%d\n",n,i,n*i);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter any number:\n");
    scanf("%d",&n);
    printf("the table of number is :\n");
    for ( i = 1; i <=10; i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}
