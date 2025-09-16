#include <stdio.h>


int Prime(int n) {
    
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int start, end;
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        if (Prime(i)) {
             printf("Prime numbers between %d and %d are: %d\n", start, end,i);
             
        }
    }
    
    return 0;
}