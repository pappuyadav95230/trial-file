/*#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i <10; i++)
    {
        printf("%d\nenetr the age \n",i);
        scanf("%d",&age);
        if(age>8)
            break;
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i <10; i++)
    {
        printf("%d\nenetr the age \n",i);
        scanf("%d",&age);
        if(age>8)
          {
                continue;
          }
          printf("this is a good boy\n");
          printf("this is a good boy\n");
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int i;
    for ( i = 1; i <=10; i++)
    {
       if (i==9)
       {
           break;
       }
       printf("%d\n",i);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i;
    for ( i = 1; i <=10; i++)
    {   if(i==3)
        {
            continue;
        }
       if (i==5)
       {
           break;
       }
       printf("%d\n",i);
    }
    return 0;
}