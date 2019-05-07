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
struct frac compute(struct frac p,struct frac q)
{
        struct frac s3;
        s3.num=(p.num*q.den)+(q.num*q.den);
        s3.den=p.den+q.den;
        return s3;
}
int main()
{

        struct frac s,s1,s2;
        s=input();
        printf("%d/%d\n",s.num,s.den);
        s1=get();
        printf("%d/%d\n",s1.num,s1.den);
        s2=compute(s,s1);
        printf("The fraction is: %d/%d",s2.num,s2.den);
}
