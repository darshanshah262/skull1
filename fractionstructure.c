#include<stdio.h>
struct frac
{
        int num;
        int den;
};
 struct frac input()
{
        struct frac s1;
        printf("Enter the nume and deno \n");
        scanf("%d%d",&s1.num,&s1.den);
        return s1;
}
struct frac get()
{
        struct frac s2;
        printf("Enter the num and deno for second fraction\n");
        scanf("%d%d",&s2.num,&s2.den);
        return s2;
}
int main()
{

        struct frac s,s1;
        s=input();
        printf("%d/%d\n",s.num,s.den);
        s1=get();
        printf("%d/%d\n",s1.num,s1.den);


        int a;
        a=(s.num*s1.den)+(s.den*s1.num);
        int b;
        b=s.den+s1.den;
        printf("%d/%d",a,b);
}


