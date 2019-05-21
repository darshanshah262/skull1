#include<stdio.h>
struct frac
{
        int num;
        int den;
};
struct frac get(int n,struct frac s[n])
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("Enter the %d numereator\n",i+1);
                scanf("%d",&s[i].num);
                printf("ENTER THE %d denominator\n",i+1);
                scanf("%d",&s[i].den);
        }
}

struct frac compute(int n,struct frac s1[n])
{
        int i;
        struct frac s[n];
        for(i=0;i<n;i++)
        {
                s[i].num=(s1[i].num*s1[i+1].den)+(s1[i+1].num*s1[i].den);
                s[i].den=s1[i].den*s1[i+1].den;
        }
}

int main()
{
        int n,i;
        printf("Enter the number of fractions to be added\n");
        scanf("%d",&n);
        struct frac s[n];
        get(n,s);
        for(i=0;i<n;i++)
        {
                printf("The %d fraction is:",i+1);
                printf("%d/%d\n",s[i].num,s[i].den);
        }
        compute(n,s);
        return 0;
}

