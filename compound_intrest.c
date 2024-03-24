#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,n,A;
    printf("enter the principle amount =" );
    scanf("%f", &p);
    printf("enter the rate of intrest =");
    scanf("%f",&r);
    printf("enter the number of time the intrest is applied =");
    scanf("%f" , &n);
    printf("enter the time period of the loan =");
    scanf("%f", &t);
    A = p * pow(1 + r / n, n * t);
    printf("the final amount is = %2f" ,A);
    return 0;

}