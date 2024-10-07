#include <stdio.h>
int main()
{
int a,b,c,sum;
float avg;
scanf("%d%d%d",&a,&b,&c);
sum=(a+b+c);
avg=(sum/3);
printf("the sum of %d,%d and %d is %d",a,b,c ,sum);
printf("\nthe average of %d,%d and %d is %f" ,a,b,c,avg);

 return 0;
}
