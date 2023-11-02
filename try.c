/*#include<stdio.h>
int main()
{
   int a = 6;
   int*p;
//    printf("enter the number: \n");
//    scanf("%d",&a);
   *p=&a;
   printf("address of p variable is: %x \n",p);
   printf("value  of p variable is: %d",*p);


    return 0;
}*/
#include<stdio.h>
int main ()
{
   int a;
   printf("Enter the number;\n");
   scanf("%d",&a);
   printf("Address of a=%d\n");
   printf("Value of variable is a=%d",a);
   return 0;
}
