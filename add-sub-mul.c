// to add ,subtract and multiple using switch statement
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,ch;
    printf("\n enter the value of a and b is\n");
    scanf("%d%d",&a,&b);
   printf("\n enetr choise:\n 1. for addition\n 2.for subtract\n 3.for  multiple");
    scanf("%d",&c);
    switch (c)
    {
    case 1: 
    c=a+b; printf("\n sum = %d",c);
         break;
    case 2:
    c=a-b; printf("\nsub=%d",c);
          break;
    case 3:
    c=a*b; printf("\n multiple=%d",c);
         break;
    
    default:
        printf('\n wromg choise');
    
    }
getch();
}