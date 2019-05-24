
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


int gcdofnumbers(int val1, int val2)
{
      int temp;
      if(val1 > val2)
      {
            temp = val1;
            val1 = val2;
            val2 = temp;
      }
      if(val2 % val1 == 0)
      {
            return val1;
      }
      else
      {
            return gcdofnumbers(val2 % val1, val1);
      }
}


int lcmofnumbers(int num1, int num2)
{
      int gcd = gcdofnumbers(num1, num2);
      return (num1 * num2) / gcd;
}

struct frac compute(int n,struct frac s[n],struct frac s1[n])
{

}

int main()
{
        int array[20],value = 1,n,i=0;
        printf("Enter the number of fractions to be added\n");
        scanf("%d",&n);
        struct frac s[n],s1[n];
        get(n,s);
        while(i < n)
        {
               value = lcmofnumbers(value,s[i].den);
               i++;
        }
        printf("\nLCM of given numbers = %d\n", value);
        for(i=0;i<n;i++)
        {
                printf("The %d fraction is\n:",i+1);
                printf("%d/%d\n",s[i].num,s[i].den);
        }
        compute(n,s,s1);
        return 0;
}


