/*#include<stdio.h>
struct date
{
    int d,m,y;
};
                     
int main()
{
    struct date today,d1;
    today.d;
    today.m;
    today.y;
    d1=today;
    printf("enetr today's date:=");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("Date: %d/%d/%d",d1.d,d1.m,d1.y);
    
    return 0;
}

/*#include<stdio.h>
struct bio  //here structure is the keyword and bio is data type 
{
    char name[20]; //here char is data type and name is variable.(stucture element)
    int age;
    float sal;
    char address[30];
};  //creating  structure variable.
 int main()
 {
     struct bio r;
     printf(" \n enetr name, age, salary and address\n");
     scanf("%s%d%f%s",&r.name,&r.age,&r.sal,&r.address);
     printf("you have enetred:\n \t%s\t%d\t%f\t%s",r.name,r.age,r.sal,r.address);
 }*/



 /*#include<stdio.h>
 struct student
 {
    char name[20];
    char father[20];
    int marks;
    char div[10];
 }; r;

 int main()
 {
     struct student r;
     printf("Inout student data\n");
     scanf("%s%s%d%s",&r.name,&r.father,&r.marks,r.div);
     printf("you enetred:");
     printf("\n%s   %s   %d   %s",r.name,r.father,r.marks,r.div);
    
 }

 #include<stdio.h>
 struct employee
 {
    char name[20];
    int salary;

 } v={"rupesh kumar",25000},q={"mohan singh",40000},r={"Rahul kumar",60000};

 int main()
 {
     //struct employee v;
     //printf("enetr the data: \n");
     //gets(v.name);
     //scanf("%d",&v.salary);
     printf(" you enetred: \n %s    %d\n",v.name,v.salary);
     printf(" you enetred: \n %s    %d\n",q.name,q.salary);
     printf(" you enetred: \n %s    %d\n",r.name,r.salary);
     return 0;
     
 }*/



 #include <stdio.h>

struct student
{
    char name[30];
    int roll;
    int sub1;
    int sub2;
} data[20]; // you can declear of array structure.

int main()
{
    int i,n,sum=0;
    struct student data[20];
    printf("how many student data to be stored: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enetr %d record\n",i);
        printf("enetr first name\n");
        scanf("%s",&data[i].name);
        printf("enter roll no.\n");
        scanf("%d", &data[i].roll);
        printf("enetr marks of sub1\n");
        scanf("%d",&data[i].sub1);
        printf("enetr marks of sub2\n");
        scanf("%d",&data[i].sub2);
        
    }
    printf("students record\n");
    for (i=1;i<=n;i++)
    {
        sum=data[i].sub1+data[i].sub2;
        printf("%s  %d  %d  %d\n",data[i].name,data[i].roll,data[i].sub1,data[i].sub2);
        printf("sum of marks obtained =%d\n",sum);
    }
    return 0;
}