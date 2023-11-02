#include<stdio.h>
int main()
{
    char a= 'c';
    char *ptra=&a;
    printf("%d\n",&ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d\n",ptra-1);//ptra mins address size increment not value increment.
    return 0;
}