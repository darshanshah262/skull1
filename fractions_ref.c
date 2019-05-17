#include<stdio.h>
struct frac
{
        int num;
        int den;
};
struct frac input(struct frac *s1)
{
        printf("Enter the nume and deno \n");
        scanf("%d %d",&s1->num,&s1->den);
}
struct frac compute(struct frac p,struct frac q)
{
        struct frac s3;
        s3.num=(p.num*q.den)+(q.num*q.den);
        s3.den=p.den*q.den;
        return s3;
}
int gcd(struct frac s)
{
        int i=0;
        if(s.num<s.den)
                i=s.num;
        else
                i=s.den;
        return i;
}
int reduce(int i,struct frac s,int *s1,int *s2)
{
        struct frac j;
        for(i;i<=s.num && i<=s.den;i--)
        {
                if(s.num%i==0 && s.den%i==0)
                {
                        j.num=i;
                        j.den=i;
                        s.num=s.num/j.num;
                        s.den=s.den/j.den;
                }

        }
        *s1=s.num;
        *s2=s.den;
}
int main()
{
        struct frac s,s1,s2;
        int s3,s4,i;
        input(&s);
        input(&s1);
        printf("%d/%d\n",s.num,s.den);
        printf("%d/%d\n",s1.num,s1.den);
        s2=compute(s,s1);
        i=gcd(s2);
        reduce(i,s2,&s3,&s4);
        printf("The fraction is: %d/%d",s3,s4);
        return 0;
}
