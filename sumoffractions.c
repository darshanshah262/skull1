
#include<stdio.h>
int getdata()
{
        int a,b;
        float f;
        printf("Enter the numerator\n");
        scanf("%d",&a);
        printf("Enter the denominator\n");
        scanf("%d",&b);
        f=(float)a/b;
        return f;
}
int compute(float a,float b)
{
        float c;
        c=a+b;
        return c;
}
void output(float a)
{
        printf("The sum of two fractions is: %f\n");
}
int main()
{
        float a,b,ans;
        a=(float)getdata();
        b=getdata();
        ans=compute(a,b);
        output(ans);
        return 0;
}
