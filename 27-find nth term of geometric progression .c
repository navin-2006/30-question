#include <stdio.h>
#include<math.h>

int main() {
    int a,r,N,t;
    printf("A=");
    scanf("%d",&a);
    printf("r=");
    scanf("%d",&r);
    printf("N=");
    scanf("%d",&N);
    t=a*pow(r,N-1);
    printf("the %dth series is %d",N,t);

    return 0;
}
