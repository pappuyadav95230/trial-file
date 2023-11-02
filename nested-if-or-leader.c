/*#include<stdio.h>
int main()
{
    int per;
    printf("enetr percentage of student\n");
    scanf("%d",&per);
    if (per>=60)
        printf("\nfirst division");
    else if(per<60&&per>=50)
        printf("\nsecond division");
    else if(per<50&&per>=40)
        printf("\nthird division");
    else
    printf("\nfail");
    return 0;   

}*/
#include<stdio.h>
int main()
{
    int day;
    printf("enetr day");
    scanf("%d",&day);
    if(day==0)
    printf("day is sunday");
    else if(day==1)
    printf("day is monday");
    else if(day==2)
    printf("day is tuesday");
    else if(day==3)
    printf("day is wednesday");
    else if(day==4)
    printf("day is thusday");
    else if(day==5)
    printf("day is friday");
    else
    printf("day is saturday");
    return 0;
}