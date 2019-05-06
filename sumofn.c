#include<stdio.h>
 int input(int n);
 int compute(int a[],int n);
 void output(int sum);
 int main()
 {
         int a[100],n,s;
         printf("Enter the number of elemnts\n");
         scanf("%d",&n);
         a[]=input(n);
         s=compute(a,n);
         output(s);
 }
 int input(int n)
 {
         int i,a[100];
         printf("Enter the nuber of elementsn");
         for(i=0;i<n;i++)
         {
                 scanf("%d",&a[i]);
         }
         return a[];
 )
 int compute(int a[],int n)
 {
         int i,sum=0;
         for(i=0;i<n;i++)
         {
                 sum=sum+a[i];
         }
         return sum;
 }
 void output(int sum)
 {
         printf("The sum is:%d\n",sum);
 }

