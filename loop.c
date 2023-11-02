/*#include<stdio.h>
int main()
{
    int loop=1;
    while (loop<=100)
    {
        printf("\n%d",loop);
        loop=loop+1;

    }
    

}
#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("first%d natural numbers are: \n");
    while(a<=n)
    {
        printf("\n%d",a);
        a++;

    }*/
/*#include<stdio.h>
int main()
{
    int i,n=0,r,p=0;
    long int bin;
    printf("enetr any binary number\n");
    scanf("%d",&bin);
    while (bin>0)
    {
       r=bin%10;
       n+=r*pow(2,p);
       p++;
       bin/=10;
    }
    printf("decimal value:%d",n);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter any numbar:");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        rev=(rev*10)+r;
    }
    printf("reverse number is %d",rev);
    return 0;
}

#include <stdio.h>
int main()
{
    int no, var, re, binary = 0, i = 1;
    printf("enter a decimal number:");
    scanf("%d", &no);
    var = no;
    while (no != 0)
    {
        re = no % 2;
        no = no / 2;
        binary = binary + (re * i);
        i = i * 10;
    }
    printf("\n\tbinary equavalent of %d is %d", var, binary);
    return 0;
}
#include<stdio.h>
int main()
{
    int a=0;
   
    do
    {
        printf("\n%d",a);
        a++;

    }while(a<=5);
   return 0;
}
#include<stdio.h>
int main()
{
    int n,r,pal,rev=0;
    printf("enter number:");
    scanf("%d",&n);
    pal=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    } while (n>0);
    if(pal==rev)
    printf("rev. no. is pal=%d",pal);
    else
    printf("rev no. is not pal=%d",pal);
    return 0;
}
#include<stdio.h>
int main()
{
    int i=1,  j=1;
    for ( ;j<3;i<5;i++)
    {
       printf("%d   %d\n",i  ,j);
       j++;
    }
    return 0;
    
}
#include<stdio.h>
int main()
{
    int i;
    printf("the number between 1 to 10 is\n:");
    for(i=1;i<=10;i++)
    {
        printf("\t\n%d",i);

    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,n,fac=1;
    printf("enetr any number\n:");
    scanf("%d",&n);
    for ( i = n; i >=1 ; i--)
        fac*=i;
        printf("fectorial is    %d ",fac);
    return 0;
    
}*/
#include<stdio.h>
int main()
{
    int i,j,n,a;
    printf("enter the size less then 9:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (a=i;a<=n;a++)
        {
           printf("\t");
        }
        for (j = i; j>=1; j--)
        {
            printf("%d",j);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
