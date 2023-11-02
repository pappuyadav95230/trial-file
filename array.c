/*#include<stdio.h>
int main()
{    int sub[5],i,total=0;
    for(i=0;i<5;i++)
    {
        printf("enter sub[%d]\n",i);
        scanf("%d",&sub[i]);
        total=total+sub[i];
    }
    printf("the element of array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",sub[i]);
    }
    printf(" total is %d\n",total);
    return 0;
}*/



// program for find the highest and lowest element in array.
/*#include<stdio.h>
int main()
{
    int i,n,large,small,a[20];
    printf("enter the number of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enetr the number \n");
        scanf("%d",&a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        large=a[i];
        else if(small>a[i])
        small=a[i];
    }   

    printf("\nthe largest element is =%d",large);
    printf("\nthe small element is =%d",small);
    return 0;
}*/


//asscending order
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,temp,a[50];
    printf("enter  the how many element to be sort: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d",&a[i]);//input value1,4,3,2,7
    }
    for(i=0;i<n;i++)
    {    for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("In ascending order:\n ");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    return 0;

}*/


//discending order
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,temp,a[50];
    printf("enter the how many element to be sort: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d",&a[i]);//input value1,4,3,2,7
    }
    for(i=0;i<n;i++)
    {    for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("In ascending order:\n ");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    return 0;

}*/



#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,temp,a[50];
    printf("enetr the how many element to be short: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("eneter element: ");
        scanf("%d",&a[i]);//input value1,4,3,2,7 
    }
    printf("In ascending order:\n");
    for(i=0;i<n;i++)
    {    for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        {
        printf("%d  ",a[i]);
        printf("\n");
        }
        printf("In discending order:\n");
    for(i=0;i<n;i++)
    {    for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;

}


