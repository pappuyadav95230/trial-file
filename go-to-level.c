/*#include<stdio.h>
int main()
{
    level:
    printf("we are in side level\n");
    goto end;
    end:
        printf("we are at end");
   
    return 0;
}
#include<stdio.h>
int main()
{
   int i,j,num;
   for(i=0;j<8;i++)
   {
   printf("%d\n",i);
   for (j = 0; i <8 ; j++)
   {
      printf("enetr the number , enetr 0 to exit\n");
      scanf("%d",&num);
      if (num ==0)
      goto end;      
   }
   
   }
   end:
    return 0;
}
#include<stdio.h>
int main()
{ int a=6,b=7,c,d,n;
    //printf("enetr the number\n");
    //scanf("%d%d",&n);
    c=a+b;
    goto printadd;
    
    
    d=a-b;
    
    printf("sub=%d\n",d);
    
    
    printadd:
    
    printf("sum=%d",c);
    
    return 0;
}*/
#include<stdio.h>
int main()
{
    int l,s;
    while (l<=90)
    {
        s=s+l;
        l=l+1;
    }
    printf("sum of numbers is %d",s);
}