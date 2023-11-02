#include<stdio.h>
#include<string.h>
union student
{
    int roll;
    char name[20];

};
int main()
{
    union student p;
    printf("enter roll no.: ");
    scanf("%d",&p.roll);
    printf("enetr student name: ");
    scanf("%s",p.name);
    printf(" student details: %d\t%s",p.roll,p.name);
    return 0;
}