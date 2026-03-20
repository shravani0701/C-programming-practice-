#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    while(original != 0) {
        original /= 10;
        count++;
    }

    original = n;

    // Calculate Armstrong
    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, count);
        original /= 10;
    }

    if(result == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}