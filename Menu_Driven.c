#include<stdio.h>
int main(){
    printf("Enter height=",a);
    scanf("%d",&a);
    printf("Enter base=",b);
     scanf("%d",&b);
    printf("Enter perpendicular=",c);
     scanf("%d",c);
    int peri=a+b+c;
    int area=(b*c)/2;
    if(peri=area){
        printf("The triangleis Equable");
    }
    else if(peri!=area){
printf("The triangle is not Equable");
    }
    else("Wrong Data Input");
    return 0;

}