/*#include<stdio.h>
int main()
{
    int a=20;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);//ptra mins address size increment not value increment.
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char a= 'c';
    char *ptra=&a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d\n",ptra-1);//ptra mins address size increment not value increment.
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char a= 'c';
    char *ptra=&a;
    printf("%p\n",ptra);
    ptra--;
    printf("%x\n",ptra);
    printf("%p\n",ptra+3);//ptra mins address size increment not value increment.
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9}; 
    int *arrptr= arr; //arr-- orarr++ it will be wrong.
    printf("1   the value of first array is %d\n",arr[0]);//ptra mins address size increment not value increment.
    printf("2   the value of second array is %d\n",arr[1]);

    printf("3   the value of third array is %d\n",*(&arr[2]));
    printf("4   the address of fourth array is %d\n",*&arr[3]);

    printf("5   the value of first array is %d\n",&arr[0]);
    printf("6   the value of second array is %d\n",&arr[1]);

    printf("7   the value of third array is %d\n",*arr);
    printf("8   the value of second array is %d\n",*arr);

    printf("9   the value of first array is %d\n",(arr+1));
    printf("10  the value of second array is %d\n",&arr[1]);

    printf("11  the value of third array is %d\n",*arr);
    printf("12  the value of second array is %d\n",*arr);

    printf("13  the value of second array is %d\n",*(&arr[1]));
    printf("14  the value of second array is %d\n",*(arr+1));

    printf("15  the value of second array is %d\n",arr);
    printf("15  the value of second array is %d\n",arr+1);
    arrptr++;

    printf("16  the value of second array is %d\n",arr);
    arrptr--;
    printf("17  the value of second array is %d\n",arr);
    
    
    return 0;
}*/
#include<stdio.h>

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
    //char str[] = {'h','a','r','r','y','\0'};
    //char str[5] = "harry";
    //char str[6] = "harry"; //size 5+  1=for \0
    char str[34];
    printf("enter the string\n ");
    gets(str);
    //scanf("%s",&str); //scanf cant read white space
    printf("using printstr\n ");
    printstr(str);
    printf("\nusing printf\n ");
     printf("%s ",str);
    printf("\nusing puts\n ");
    puts(str);
    return 0;
}



