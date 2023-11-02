//print tne matrix.
/*#include<stdio.h>
int main()
{
    int n,m,i,j,a[50][50];
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}



//print two matrix
#include<stdio.h>
int main()
{
    int n,m,i,j,a[50][50];
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n");
    }

    printf("enter the row and colunm in second matrix: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number of second matric: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the second matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}*/


/*sum of two matrix.
#include<stdio.h>
int main()
{
    int n,m,i,j,a[50][50],b[40][40],sum [60][60];
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }


    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }


    printf("enter the row and colunm in second matrix: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number of second matric: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }


    printf("the second matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d  ",b[i][j]);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        sum[i][j]=a[i][j]+b[i][j];
    }

    printf("sum of two matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d ",sum[i][j]);
        printf("\n");
    }
    return 0;
}*/


/*with the help of function add how many matrix .
#include<stdio.h>
void add(void);
int main()
{
    add();// it is depend upon oyu . how many time you have to use,


    add();


    add();

}
void add()
{
    int n,m,i,j,a[50][50],b[40][40],sum [60][60]; //n=row , m= column
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }


    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }


    printf("enter the row and colunm in second matrix: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number of second matric: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }


    printf("the second matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d  ",b[i][j]);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        sum[i][j]=a[i][j]+b[i][j];
    }

    printf("sum of two matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d ",sum[i][j]);
        printf("\n");
    }
    return 0;
}*/



/*enetr the number of matrix.
#include<stdio.h>
void add(void);
int main()
{
    int n,m,i,j,a[50][50],sum[50][50];
    add();// it is depend upon oyu . how many time you have to use,
    add();
    
}
void add()
{
    int n,m,i,j,a[50][50],sum [60][60]; //n=row , m= column
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }


    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        printf("%d  ",a[i][j]);
        printf("\n");
    }
    
}*/

#include<stdio.h>
int main()
{
    int n,m,i,j,a[50][50],sum=0;
    printf("enter the row and colunm: \n");
    scanf("%d%d",&n,&m);
    printf("enetr the number: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
            
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][j];
    }
    printf(" the sum of a diagonal element is %d",sum);
    return 0;
}




