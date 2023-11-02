/*#include<stdio.h>
int main()
{
    int n,i,fac=1;
    printf("enetr the number \n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fac=fac*i;
    }
    printf("factorial is %d",fac);
    return 0;
}   */
#include<stdio.h>
int fac(int);
int main()
{
    int n,ans;
    printf("enetr a number\n");
    scanf("%d",&n);
     ans=fac(n);
    printf("factorial is %d\n", ans);
    printf("enetr a number\n");
    scanf("%d",&n);
     ans=fac(n);
    printf("factorial is %d\n", ans);
}
int fac (int x)
{
    int n,f;
    if(x==1)
        return 1;
    else
        f=x*fac(x-1);
    return f;
}