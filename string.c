/*#include<stdio.h>
main()
{
    char name[10];
    printf("enetr your name:\n");
    scanf("%s",&name);
    printf("your name is: %s",name);
    return 0;
}*/

/*traversing of string
#include<stdio.h>
main()
{
    int j,count=0;
    char name[20];
    printf("enetr your name:\n");
    gets(name);
    for(j=0;name[j]!='\0';j++)
    {
        count++;
    }
    printf("no of charcter are : %d",count);
}*/

/*#include<stdio.h>
int main()
{
   char name[3][10];
   int i;
   printf("enter three name:\n");
   for(i=0;i<3;i++)
   gets(name[i]);
   puts("you entered:\n ");
   for(i=0;i<3;i++)
   printf("\n%s",name[i]);


}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]=" Rajput ";
    char s2[]="Rupesh ";
    char s3[30];
    puts(strcat(s1,s2));
    //printf("the combine sentence is:%s \n",strcat(s1,s2));
    printf("the length of s1 is: %d\n",strlen(s1));
    printf("the length of s2 is: %d\n",strlen(s2));
    //printf("the reverce of s1 is:%s \n",strrev(s1));// for reverce any string
     //puts(strrev(s1)); //for reverce any string 
     strcpy(s3 ,strcat(s1,s2));
     puts(s3);
     printf("the strcmp for s1 is: %d\n",strcmp(s1,s2));
    return 0;
}*/


#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    char s1[10] = "pappu ";
    char s2[10] = "abhishek";
    char s3[20];
    //printf("enetr the name of first friend:\n ");
    //gets(s1);
   // printf("enetr the name of second friend:\n ");
    //gets(s2);
    printf("the name of the two friends is: \n");
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}