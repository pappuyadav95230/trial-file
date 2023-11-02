// // write a program to find the largest number between three number
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the numbers: \n");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b&&a>c)
//     {
//         printf("largest number is: %d",a);

//     }
//     if (b>a&&b>c)
//     {
//         printf("largest number is: %d",b);
        
//     }
//     if (c>a&&c>b)
//     {
//         printf("largest number is: %d",c); 
//     }
//     if (a==b&&b==c)
//     {
//         printf("all number are equal:  ");
//     }
//     return 0;
// }



// write a program to find the largest number between 5 numbers
// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e;
//     printf("Enter the numbers: \n");
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     if (a>b&&a>c&&a>d&&a>e)
//     {
//         printf("largest number is: %d",a);

//     }
//     if (b>a&&b>c&&b>d&&b>e)
//     {
//         printf("largest number is: %d",b);
        
//     }
//     if (c>a&&c>b&&c>d&&c>e)
//     {
//         printf("largest number is: %d",c); 
//     }
//     if (d>a&&d>b&&d>c&&d>e)
//     {
//         printf("largest number is: %d",d);
        
//     }
//     if (e>a&&e>b&&e>c&&e>d)
//     {
//         printf("largest number is: %d",e); 
//     }
    
//     if (a==b&&b==c&&c==d&&d==e)
//     {
//         printf("all number are equal:  ");
//     }
//     return 0;
// }



// Write a program for marks scored division

#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks: \n");
    scanf("%d",&marks);
    if (100>=marks&&marks>65)
    {
        printf(" Congrats ! you scored grad : A+");
    }
    else if (65>=marks&&marks>50)
    {
        printf(" Congrats ! you scored grad : A");
    }
    else if (50>=marks&&marks>40)
    {
        printf(" Congrats ! you scored grad : B");
    }
    else if (40>=marks&&marks>30)
    {
        printf(" Congrats ! you scored grad : C");
    }
    else
    
        printf("you are fail.....");
    
     return 0;
}