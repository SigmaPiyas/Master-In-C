#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a;
    printf("Enter Principal=",p);
    scanf("%f",&p);
    printf("Enter Rate of Interest=",r);
    scanf("%f",&r);
    printf("Enter Time Period=",t);
    scanf("%f",&t);
    
    a=p*(pow((1+r/100),t));
    printf("The compound Interest is=%f",a-p);
    return 0;
}