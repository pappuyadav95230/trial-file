//function having no argument and no return value.
/*#include<stdio.h>
void add (void); //function declearation
 main()
{
    add();
    add();//function call.
}
void add (void)
{
    int a,b,c;
    printf("enetr two numbers;\n ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of two number is =%d\n",c);
}




 function with argument and no return value.
#include<stdio.h>
void add (int x,int y); // function declearation
main()
{
    int a,b;
    printf("enetr two number:\n");
    scanf("%d%d",&a,&b);
    add(a,b); // function call
     
}
void add (int x,int y)// here x,y is formal argument .
{
    int c;
    c=x+y;
    printf("addition is %d\n",c);
}


/*function havin no argument and return value.
#include<stdio.h>
int add ();
main()
{   
    int s;
    int add ();
    s=add ();
    printf("addition is %d\n",s);
    
}
int add ()
{
    int a,b,c;
    printf("enetr ntwo numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}



function with argument and return value.
#include<stdio.h>
int add (int,int);// function declration.
main()
{
    int a,b,s;
   
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    s = add (a,b); // calling function
    printf("square is %d\n",s);
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    s = add (a,b);
    
    printf("square is %d\n",s);
}
int add (int x,int y)
{
    int c;
    c=x+y;
    return c;
}*/




//multiple tast one time .
#include<stdio.h>
void add (void);
void sub (void);
void mul (void); //function declearation
 main()
{ 
    add();//function call.
    sub();
    sub();
    mul();
    mul();
//
    
}
void add (void)
{
    int a,b,c;
    printf("enetr two numbers for add;\n ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of two number is =%d\n",c);
}
void sub (void)
{
    int a,b,c;
    printf("enetr two value for sub\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("sub of two number is %d \n",c);
}
void mul (void)
{
    int a,b,c;
    printf("enetr two numbers for mul;\n ");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("mul of two number is =%d\n",c);
}





/*find the square and cube of a given nu8mber using function.
#include<stdio.h>
void square ();
void cube ();
int main()
{
    square();
    cube();
   

}
void square()
{
    int n,sqr;
    printf("enetr the number\n");
    scanf("%d",&n);
    sqr=n*n;
    printf("square of number is =%d\n",sqr);
    
    
}
void cube ()
{
    int n,c;
    printf("enetr the number\n");
    scanf("%d",&n);
    c=n*n*n;
    printf("cube of number is =%d\n",c);
    
    
}*/



