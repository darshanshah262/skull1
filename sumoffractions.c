#include<stdio.h>
int getdatan()
{
        int a;
        printf("Enter the numerator\n");
        scanf("%d",&a);
        return a;
}
int getdatad()
{
        int b;
        printf("Enter the denominator\n");
        scanf("%d",&b);
        return b;
}
void compute(int a,int c,int b,int d,int *x3,int *x4)
{
        //int x3,x4;
        *x3=(a*d)+(b*c);
        *x4=b+d;
}
void output(int a,int b)
{
        printf("The sum of two fractions is: %d/%d\n",a,b);
}
int main()
{
        int x1,y1,x2,y2,x3,x4;
        x1=getdatan();
        y1=getdatad();
        printf("The first fraction is: %d/%d\n",x1,y1);
        x2=getdatan();
        y2=getdatad();
        printf("The second fraction is: %d/%d\n",x2,y2);
        compute(x1,x2,y1,y2,&x3,&x4);
        output(x3,x4);
        return 0;
}


