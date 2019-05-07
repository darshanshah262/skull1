#include<stdio.h>
struct frac
{
        int num;
        int den;
}s1,s2;
 input()
{
        printf("Enter the nume and deno \n");
        scanf("%d%d",&s1.num,&s1.den);
        return s1;
}
 get()
{
        printf("Enter the num and deno for second fraction\n");
        scanf("%d%d",&s2.num,&s2.den);
        return s2;
}
int main()
{
        int a,b;
        a=input();
        b=get();
        printf("%d\n%d",a,b);
}
