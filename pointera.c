//pointer example
/*#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("value of a is : %d\n",a); // value of a 
    printf("value of a is : %d\n",*ptr);//value 0f a 
    printf("value of a is :%d\n",&ptr);// address of a
    printf("value of a is :%d\n",ptr);// address of a
    printf("value of a is : %x\n",&a);//address of a
    return 0;
}*/



#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int *ptr2=NULL;
    printf("value of a is : %d\n",a);
    printf("value of a is : %d\n",*ptr);
    printf("value of a is :%p\n",&ptr);
    printf("value of a is :%p\n",ptr);
    printf("value of a is :%p\n",&a);
     printf("value of address of garbage valur :%p\n",ptr2);
    return 0;
}



