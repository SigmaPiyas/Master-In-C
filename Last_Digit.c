#include<stdio.h>
int main(){
    int n;
    printf("Enter your number=",n);
    scanf("%d",&n);
    printf("The last digit is=%d\n",(n-(n/10)*10));
    printf("The Last digit is=%d",n%10);
    return 0;
}
