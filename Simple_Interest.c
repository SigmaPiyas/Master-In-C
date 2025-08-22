#include<stdio.h>

int main(){

    int p,r,t;
    printf("Enter Pricipal=",p);
    scanf("%d",&p);
    printf("Enter Rate of Interest=",r);
    scanf("%d",&r);
    printf("Enter Time Period(yr)=",t);
    scanf("%d",&t);
    printf("The Simple Interest is =%d", (p*r*t)/100);

    return 0;


}
