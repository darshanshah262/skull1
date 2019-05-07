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
        s3.den=p.den*q.den;
        return s3;
}
struct frac gcd(struct frac s)
{
        struct frac j;
        int i;
        for(i=1;i<=s.num && i<=s.den;i++)
        {
                if(s.num%i==0 && s.den%i==0)
                {
                        j.num=i;
                        j.den=i;
                        s.num=s.num/j.num;
                        s.den=s.den/j.den;
                        return s;
                }
                else
                        return s;
        }
}
