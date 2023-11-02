/*#include<stdio.h>
int main()
{
    int n,i,j;//i is the no. of row.and j is denotes no. of column
    printf("enetr the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j = 1; j <=n; j++)
        {
        if(j<=i)
        printf(" *");
        else
        printf(" ");        
        }
        printf("\n");
    }
   
}







/*#include<stdio.h>
                
int main()
{
    int i,j;
    for ( i= 1; i <=5; i++)
    {
        for (j=1;j<=5;j++)
        { 
        if(j>=6-i)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
     for(j=1;j<=5;j++)
    {
        if(j>=i)
        printf("*");
        else
        printf(" ");

    }
    printf("\n");
    }
    return 0;
    
}
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
     for(j=1;j<=5;j++)
    {
        if(j<=6-i)
        printf(" *");
        else
        printf(" ");

    }
    printf("\n");
    }
    return 0;
    
}
#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
     for(j=1;j<=10;j++)
    {
        if(j>=6-i&&j<=4+i)
            printf("*");
        else
            printf(" ");

    }
    printf("\n");
    }
    return 0;
    
}
//best methofe for star ptinting .
#include<stdio.h>
                
int main()
{
    int n,i,j;
    printf("enter the value nof n\n");
    scanf("%d",&n);
    for ( i= 1; i <=n; i++)
    {
        for (j=0;j<i+1;j++)
        { 
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
                
int main()
{
    int n,i,j;
    printf("enter the value nof n\n");
    scanf("%d",&n);
    for ( i= 1; i <=n; i++)
    {
        for (j=1;j<=i;j++)
        { 
        printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
                
int main()
{
    int n,i,j,no;
    printf("enter the value nof n\n");
    scanf("%d",&n);
    for ( i= 1; i <=n; i++)
    {
        for (j=1;j<=i;j++)
        { no++;
        printf("    %d",no);
        }
        printf("\n");
    }
    return 0;
}*/



#include<stdio.h>
int main()
{
    int n,i,j;
    printf("eneter the number of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");   
    }
    return 0;
}